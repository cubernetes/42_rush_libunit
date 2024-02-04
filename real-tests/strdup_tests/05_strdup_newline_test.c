/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_newline_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 00:48:21 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>

int	strdup_newline_test(void)
{
	const char	*str;

	str = "hello\nworld";
	if (strdup(str) != ft_strdup(str))
		return (-1);
	return (0);
}
