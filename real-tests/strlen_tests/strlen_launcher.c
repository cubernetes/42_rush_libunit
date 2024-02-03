/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:26:06 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework/libunit.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "STRLEN"

int	hello_test(void);
int	null_test(void);
int	bigger_string_test(void);
int	nul_test(void);
int	newline_test(void);

int	strlen_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "Hello test", hello_test);
	load_test(tests, "NULL test", null_test);
	load_test(tests, "Bigger string test", bigger_string_test);
	load_test(tests, "Zero test", nul_test);
	load_test(tests, "newline test", newline_test);
	return (launch_tests(tests, ROUTINE_NAME));
}
