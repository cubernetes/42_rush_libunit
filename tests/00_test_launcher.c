/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_test_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:32:11 by dkoca             #+#    #+#             */
/*   Updated: 2024/02/04 00:32:13 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"
#include "../framework/libunit.h"
#include "../libft/libft.h"

int	error_test_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "SIGSEGV Test", segv_test);
	load_test(tests, "OK test", ok_test);
	load_test(tests, "KO test", ko_test);
	load_test(tests, "SIGBUS test", buserror_test);
	load_test(tests, "SIGFPE test", sigfpe_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
