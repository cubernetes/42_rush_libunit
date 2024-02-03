/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:40:07 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:54:26 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "../libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

void	print_status(char *routine_name, char *testname, int status)
{
	if (status == 0)
		ft_printf("%s: %s : [\033[32mOK\033[m]\n", routine_name, testname);
	else if (status == 255)
		ft_printf("%s: %s : [\033[31mKO\033[m]\n", routine_name, testname);
	else if (status == 11)
		ft_printf("%s: %s : [\033[41;30mSIGSEGV\033[m]\n",
			routine_name, testname);
	else if (status == 7)
		ft_printf("%s: %s : [\033[43;30mSIGBUS\033[m]\n",
			routine_name, testname);
}

int	run_test(char *routine_name, void *data)
{
	t_test	*test;
	pid_t	pid;
	int		status;

	test = (t_test *)data;
	pid = fork();
	if (pid == -1)
	{
		ft_printf("\033[31mfork() error in line %d\033[m\n", __LINE__);
		return (43);
	}
	else if (pid == 0)
		exit(test->func());
	wait(&status);
	if (WIFEXITED(status))
		status = WEXITSTATUS(status);
	else if (WIFSIGNALED(status))
		status = WTERMSIG(status);
	print_status(routine_name, test->name, status);
	if (status)
		return (1);
	return (0);
}

int	execute_tests(t_ddeque *ddeque, char *routine_name)
{
	t_ddeque_node	*head;
	t_ddeque_node	*orig_head;
	int				sum;

	sum = 0;
	head = ddeque->head;
	orig_head = head;
	if (!head)
		return (0);
	sum += run_test(routine_name, head->data);
	while (head->next != orig_head)
	{
		sum += run_test(routine_name, head->next->data);
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

	number_of_tests_failed = execute_tests(tests, routine_name);
	ft_printf("%d/%d tests succeded\n",
		tests->size - (size_t)number_of_tests_failed, tests->size);
	if (number_of_tests_failed == 0)
		return (0);
	return (-1);
}
