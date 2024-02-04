/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_abs_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:53:26 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ABS"

int	abs_pos_test(void);
int	abs_neg_test(void);
int	abs_zero_test(void);
int	abs_max_test(void);
int	abs_min_test(void);

int	abs_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Positive test", abs_pos_test);
	load_test(tests, "Negative test", abs_neg_test);
	load_test(tests, "Zero test", abs_zero_test);
	load_test(tests, "INT_MAX test", abs_max_test);
	load_test(tests, "INT_MIN test", abs_min_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
