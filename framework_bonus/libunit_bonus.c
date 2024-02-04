/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:40:07 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 22:38:25 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "../libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>

void	ft_log(int logfd, char *rname, char *tname, int status)
{
	if (status == 0)
		ft_dprintf(logfd, "%s: %s: [\033[32mOK\033[m]\n", rname, tname);
	else if (status == 255)
		ft_dprintf(logfd, "%s: %s: [\033[31mKO\033[m]\n", rname, tname);
	else if (status == SIGSEGV)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGSEGV\033[m]\n", rname, tname);
	else if (status == SIGBUS)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGBUS\033[m]\n", rname, tname);
	else if (status == SIGILL)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGILL\033[m]\n", rname, tname);
	else if (status == SIGABRT)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGABRT\033[m]\n", rname, tname);
	else if (status == SIGPIPE)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGPIPE\033[m]\n", rname, tname);
	else if (status == SIGFPE)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGFPE\033[m]\n", rname, tname);
	else if (status == SIGALRM)
		ft_dprintf(logfd, "%s: %s: [\033[43;30mSIGTIMEOUT (2 seconds)\033[m]\n",
			rname, tname);
	else
		ft_dprintf(logfd, "%s: %s: [\033[44;30mUNKNOWN ERROR/SIGNAL\033[m]\n",
			rname, tname);
}

void	print_status(int log_fd, char *r_name, char *testname, int status)
{
	ft_log(log_fd, r_name, testname, status);
	if (status == 0)
		ft_printf("%s: %s: [\033[32mOK\033[m]\n", r_name, testname);
	else if (status == 255)
		ft_printf("%s: %s: [\033[31mKO\033[m]\n", r_name, testname);
	else if (status == SIGSEGV)
		ft_printf("%s: %s: [\033[41;30mSIGSEGV\033[m]\n", r_name, testname);
	else if (status == SIGBUS)
		ft_printf("%s: %s: [\033[41;30mSIGBUS\033[m]\n", r_name, testname);
	else if (status == SIGILL)
		ft_printf("%s: %s: [\033[41;30mSIGILL\033[m]\n", r_name, testname);
	else if (status == SIGABRT)
		ft_printf("%s: %s: [\033[41;30mSIGABRT\033[m]\n", r_name, testname);
	else if (status == SIGPIPE)
		ft_printf("%s: %s: [\033[41;30mSIGPIPE\033[m]\n", r_name, testname);
	else if (status == SIGFPE)
		ft_printf("%s: %s: [\033[41;30mSIGFPE\033[m]\n", r_name, testname);
	else if (status == SIGALRM)
		ft_printf("%s: %s: [\033[43;30mSIGTIMEOUT (2 seconds)\033[m]\n",
			r_name, testname);
	else
		ft_printf("%s: %s: [\033[44;30mUNKNOWN ERROR/SIGNAL\033[m]\n",
			r_name, testname);
}

int	run_test(int log_fd, char *routine_name, void *data)
{
	t_test	*test;
	pid_t	pid;
	int		status;

	test = (t_test *)data;
	pid = fork();
	if (pid == -1)
	{
		ft_printf("\033[31mfork() error in line %d\033[m\n", __LINE__);
		ft_dprintf(log_fd, "\033[31mfork() error in line %d\033[m\n", __LINE__);
		return (43);
	}
	else if (pid == 0)
		exit(test->func());
	wait(&status);
	if (WIFEXITED(status))
		status = WEXITSTATUS(status);
	else if (WIFSIGNALED(status))
		status = WTERMSIG(status);
	print_status(log_fd, routine_name, test->name, status);
	if (status)
		return (1);
	return (0);
}

int	execute_tests(int log_fd, t_ddeque *ddeque, char *routine_name)
{
	t_ddeque_node	*head;
	t_ddeque_node	*orig_head;
	int				sum;

	sum = 0;
	head = ddeque->head;
	orig_head = head;
	if (!head)
		return (0);
	sum += run_test(log_fd, routine_name, head->data);
	while (head->next != orig_head)
	{
		sum += run_test(log_fd, routine_name, head->next->data);
		head = head->next;
	}
	return (sum);
}

void	load_test(t_ddeque *tests, char *name, int (*func)(void))
{
	t_test	*test;

	test = ft_malloc(sizeof(*test));
	test->name = name;
	test->func = func;
	ddeque_push_value_bottom(tests, test);
}

int	launch_tests(t_ddeque *tests, char *routine_name)
{
	int	number_of_tests_failed;
	int	log_fd;

	log_fd = open(ft_strjoin(routine_name, ".log"),
			O_CREAT | O_WRONLY | O_TRUNC, 0644);
	number_of_tests_failed = execute_tests(log_fd, tests, routine_name);
	ft_dprintf(log_fd, "%d/%d tests succeded\n\n",
		tests->size - (size_t)number_of_tests_failed, tests->size);
	ft_printf("%d/%d tests succeded\n\n",
		tests->size - (size_t)number_of_tests_failed, tests->size);
	if (number_of_tests_failed == 0)
		return (0);
	return (-1);
}
