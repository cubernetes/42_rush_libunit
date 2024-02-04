/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_signal_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 20:27:35 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:34:11 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "SIGNALS"

int	abort_test(void);
int	alarm_test(void);
int	fpe_test(void);
int	illegal_test(void);

int	signal_launcher(void)
{
	t_ddeque	*tests;

	load_test(tests, "abort test", abort_test);
	load_test(tests, "bla test", alarm_test);
	load_test(tests, "fpe test", fpe_test);
	load_test(tests, "illegal test", illegal_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
