/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putchar_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 23:31:42 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework_bonus/libunit_bonus.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "PUTCHAR"

int	putchar_a_test(void);
int	putchar_b_test(void);
int	putchar_zero_test(void);
int	putchar_127_test(void);
int	putchar_nl_test(void);

int	putchar_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test_stdout(tests, "Positive test", putchar_a_test, "a");
	load_test_stdout(tests, "Negative test", putchar_b_test, "b");
	load_test_stdout(tests, "Zero test", putchar_zero_test, "\0");
	load_test_stdout(tests, "INT_MAX test", putchar_127_test, "\x7f");
	load_test_stdout(tests, "INT_MIN test", putchar_nl_test, "\n");
	return (launch_tests(tests, ROUTINE_NAME));
}
