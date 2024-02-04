/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen_launcher.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 21:06:39 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 01:15:09 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen_tests.h"
#include "../framework/libunit.h"
#include "../libft/libft.h"

int	strdup_launcher(void)
{
	t_ddeque	*tests;
	int			ret;

	tests = ddeque_init();
	load_test(tests, "Hello test", hello_test);
	load_test(tests, "NULL test", null_test);
	load_test(tests, "Bigger string test", bigger_string_test);
	load_test(tests, "Zero test", zero_test);
	load_test(tests, "newline test", newline_test);
	return (launch_tests(tests, ROUTINE_NAME));
}

int	main(void)
{
	strlen_launcher();
	return (0);
}
