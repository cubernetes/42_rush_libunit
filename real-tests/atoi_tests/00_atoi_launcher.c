/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_launcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 21:59:12 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ATOI"

int	atoi_pos_test(void);
int	atoi_neg_test(void);
int	atoi_zero_test(void);
int	atoi_max_test(void);
int	atoi_min_test(void);

int	atoi_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Positive test", atoi_pos_test);
	load_test(tests, "Negative test", atoi_neg_test);
	load_test(tests, "Zero test", atoi_zero_test);
	load_test(tests, "INT_MAX test", atoi_max_test);
	load_test(tests, "INT_MIN test", atoi_min_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
