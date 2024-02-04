/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_signal_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:27:35 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:30:34 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "SIGNALS BONUS"

int	abort_test(void);
int	alarm_test(void);
int	fpe_test(void);
int	illegal_test(void);

int	signal_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "abort test", abort_test);
	load_test(tests, "fpe test", fpe_test);
	load_test(tests, "illegal test", illegal_test);
	load_test(tests, "alarm test", alarm_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
