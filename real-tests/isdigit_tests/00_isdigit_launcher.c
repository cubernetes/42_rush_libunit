/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isdigit_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:53:12 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ISDIGIT"

int	isdigit_char_test(void);
int	isdigit_num_test(void);
int	isdigit_space_test(void);
int	isdigit_null_test(void);

int	isdigit_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "ASCII Character test", isdigit_char_test);
	load_test(tests, "Number test", isdigit_num_test);
	load_test(tests, "Space test", isdigit_space_test);
	load_test(tests, "NULL test", isdigit_null_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
