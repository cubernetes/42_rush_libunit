/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_min_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:23:43 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "MIN"

int	min_pos_test(void);
int	min_neg_test(void);
int	min_zero_test(void);
int	min_max_test(void);
int	min_min_test(void);

int	min_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Positive test", min_pos_test);
	load_test(tests, "Negative test", min_neg_test);
	load_test(tests, "Zero test", min_zero_test);
	load_test(tests, "INT_MAX test", min_max_test);
	load_test(tests, "INT_MIN test", min_min_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
