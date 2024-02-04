/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 00:49:52 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <string.h>

int	null_test(void)
{
	const char	*str;

	str = NULL;
	if (strdup(str) != ft_strdup(str))
		return (-1);
	return (0);
}
