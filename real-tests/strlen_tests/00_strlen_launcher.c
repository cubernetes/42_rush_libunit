/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/05 21:28:42 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "STRLEN"

int	strlen_hello_test(void);
int	strlen_null_test(void);
int	strlen_bigger_string_test(void);
int	strlen_zero_test(void);
int	strlen_newline_test(void);

int	strlen_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test(tests, "Hello test", strlen_hello_test);
	load_test(tests, "NULL test (expecting SIGSEGV)", strlen_null_test);
	load_test(tests, "Bigger string test", strlen_bigger_string_test);
	load_test(tests, "Zero test", strlen_zero_test);
	load_test(tests, "newline test", strlen_newline_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
