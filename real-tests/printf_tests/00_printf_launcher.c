/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_printf_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 20:56:02 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/05 21:30:43 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../framework_bonus/libunit_bonus.h"
#include "../../libft/libft.h"

#define ROUTINE_NAME "PRINTF"
#define LABC "abcdefghijklmnopqrstuvwxyz"
#define UABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "0123456789"
#define ASCII "!@#$%^&*()_+=-`~[]'\\\"|}{>?<,./;:	\n\r\v\f"

char	*make_big_str(const char *base_str, size_t repeat);
int		printf_hello_world_test(void);
int		printf_hello_world_nl_test(void);
int		printf_big_string_test(void);
int		printf_fmt_s_test(void);
int		printf_fmt_d_test(void);
int		printf_fmt_p_test(void);
int		printf_fmt_X_test(void);

int	printf_launcher(void)
{
	t_ddeque	*tests;

	tests = ddeque_init();
	load_test_stdout(tests, "hello world test",
		printf_hello_world_test, "Hello, World!");
	load_test_stdout(tests, "hello world nl test", printf_hello_world_nl_test,
		"Hello, World!\n");
	load_test_stdout(tests, "big str test", printf_big_string_test,
		make_big_str(LABC UABC DIGITS ASCII, 100000));
	load_test_stdout(tests, "%s test", printf_fmt_s_test,
		"Hi, my name is Bob");
	load_test_stdout(tests, "%d test", printf_fmt_d_test,
		"the int is: 12340");
	load_test_stdout(tests, "%p test", printf_fmt_p_test,
		"the ptr is: 0xdeadbeef");
	load_test_stdout(tests, "%X test", printf_fmt_X_test,
		"the X num is: 9ABCDEF0");
	return (launch_tests(tests, ROUTINE_NAME));
}
