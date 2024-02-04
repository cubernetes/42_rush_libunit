/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:45:56 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 23:39:02 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H 1

# include "../libft/libft.h"

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
	char	*stdout;
}			t_test;

int		launch_tests(t_ddeque *tests, char *routine_name);
void	load_test(t_ddeque *tests, char *name, int (*func)(void));
void	load_test_stdout(t_ddeque *tests, char *name, int (*func)(void),
			char *stdout);
void	ft_log(int logfd, char *rname, char *tname, int status);
void	print_status(int log_fd, char *r_name, char *testname, int status);
int		check_stdout(int log_fd, t_test *test, char *routine_name, int fds[3]);

#endif /* libunit_bonus.h. */
