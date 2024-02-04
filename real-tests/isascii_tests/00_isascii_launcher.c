/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:16:04 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "ISASCII"

int	isascii_char_test(void);
int	isascii_num_test(void);
int	isascii_space_test(void);
int	isascii_null_test(void);
int	isascii_nonascii_test(void);

int	isascii_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Ascii character test", isascii_char_test);
	load_test(tests, "Number test", isascii_num_test);
	load_test(tests, "Space test", isascii_space_test);
	load_test(tests, "NULL test", isascii_null_test);
	load_test(tests, "Non-ASCII test", isascii_nonascii_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
