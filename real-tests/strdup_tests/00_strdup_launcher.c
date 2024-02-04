/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:35:41 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../framework/libunit.h"
#include "../libft/libft.h"

#define ROUTINE_NAME "STRDUP"

int	strdup_hello_test(void);
int	strdup_null_test(void);
int	strdup_bigger_string_test(void);
int	strdup_zero_test(void);
int	strdup_newline_test(void);

int	strdup_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Hello test", strdup_hello_test);
	load_test(tests, "NULL test", strdup_null_test);
	load_test(tests, "Bigger string test", strdup_bigger_string_test);
	load_test(tests, "Zero test", strdup_zero_test);
	load_test(tests, "newline test", strdup_newline_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
