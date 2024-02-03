/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 22:05:55 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ISDIGIT"

int	char_test(void);
int	num_test(void);
int	space_test(void);
int	null_test(void);

int	isdigit_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "Ascii character test", char_test);
	load_test(tests, "Number test", num_test);
	load_test(tests, "Space test", space_test);
	load_test(tests, "NULL test", null_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
