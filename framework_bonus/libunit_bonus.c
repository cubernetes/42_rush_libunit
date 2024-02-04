/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:40:07 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 23:38:45 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "../libft/libft.h"
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>

int	run_test(int log_fd, char *routine_name, t_test *test)
{
	pid_t	pid;
	int		fds[3];

	(free(NULL), pipe(fds), pid = fork());
	if (pid == -1)
	{
		ft_printf("\033[31mfork() error in line %d\033[m\n", __LINE__);
		ft_dprintf(log_fd, "\033[31mfork() error in line %d\033[m\n", __LINE__);
		return (43);
	}
	else if (pid == 0)
	{
		(close(fds[0]), dup2(fds[1], STDOUT_FILENO));
		exit(test->func());
	}
	close(fds[1]);
	if (check_stdout(log_fd, test, routine_name, fds))
		return (1);
	wait(fds + 2);
	if (WIFEXITED(fds[2]))
		fds[2] = WEXITSTATUS(fds[2]);
	else if (WIFSIGNALED(fds[2]))
		fds[2] = WTERMSIG(fds[2]);
	print_status(log_fd, routine_name, test->name, fds[2]);
	return (fds[2] != 0);
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
	test->stdout = ft_strdup("");
	ddeque_push_value_bottom(tests, test);
}

void	load_test_stdout(t_ddeque *tests, char *name, int (*func)(void),
		char *stdout)
{
	t_test	*test;

	test = ft_malloc(sizeof(*test));
	test->name = name;
	test->func = func;
	test->stdout = ft_strdup(stdout);
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
