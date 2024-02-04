/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_signal_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:32:11 by dkoca             #+#    #+#             */
/*   Updated: 2024/02/04 21:33:19 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "SIGNALS"

int	segv_test(void);
int	ok_test(void);
int	ko_test(void);
int	buserror_test(void);

int	signal_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "SIGSEGV Test", segv_test);
	load_test(tests, "OK test", ok_test);
	load_test(tests, "KO test", ko_test);
	load_test(tests, "SIGBUS test", buserror_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
