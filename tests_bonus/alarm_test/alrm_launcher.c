/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alrm_launcher.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 22:40:54 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ALARM SIGNAL TEST"

int	alarm_test(void);

int	alrm_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "Alarm test", alarm_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
