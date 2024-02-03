/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abs_launcher.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 14:38:19 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "abs_tests.h"
#include "../framework/libunit.h"
#include "../libft/libft.h"

int	abs_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "Positive test", pos_test);
	load_test(tests, "Negative test", neg_test);
	load_test(tests, "Zero test", zero_test);
	load_test(tests, "INT_MAX test", max_test);
	load_test(tests, "INT_MIN test", min_test);
	return (launch_tests(tests, ROUTINE_NAME));
}

int	main(void)
{
	abs_launcher();
	return (0);
}
