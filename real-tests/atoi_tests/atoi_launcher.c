/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_launcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:34:38 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ATOI"

int	pos_test(void);
int	neg_test(void);
int	zero_test(void);
int	max_test(void);
int	min_test(void);

int	atoi_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Positive test", pos_test);
	load_test(tests, "Negative test", neg_test);
	load_test(tests, "Zero test", zero_test);
	load_test(tests, "INT_MAX test", max_test);
	load_test(tests, "INT_MIN test", min_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
