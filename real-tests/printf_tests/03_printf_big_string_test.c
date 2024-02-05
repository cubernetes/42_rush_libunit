/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_printf_big_string_test.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 21:12:28 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/05 21:30:47 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"

#define LABC "abcdefghijklmnopqrstuvwxyz"
#define UABC "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define DIGITS "0123456789"
#define ASCII "!@#$%^&*()_+=-`~[]'\\\"|}{>?<,./;:	\n\r\v\f"

char	*make_big_str(const char *base_str, size_t repeat)
{
	size_t	size;
	size_t	str_size;
	char	*str;
	size_t	offset;

	str_size = ft_strlen(base_str);
	size = (repeat * str_size) + 1;
	str = ft_malloc(size);
	offset = 0;
	while (repeat--)
	{
		ft_memcpy(str + offset, base_str, str_size);
		offset += str_size;
	}
	str[size - 1] = 0;
	return (str);
}

int	printf_big_string_test(void)
{
	ft_printf("%s", make_big_str(LABC UABC DIGITS ASCII, 100000));
	return (0);
}
