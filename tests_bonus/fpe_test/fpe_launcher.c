/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpe_launcher.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 23:17:02 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "FPE SIGNAL TEST"

int	fpe_test(void);

int	fpe_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "FPE test", fpe_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
