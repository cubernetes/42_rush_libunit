/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_newline_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:20:47 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <string.h>

int	newline_test(void)
{
	const char	*str;

	str = "hello\nworld";
	if (strlen(str) != ft_strlen(str))
		return (-1);
	return (0);
}
