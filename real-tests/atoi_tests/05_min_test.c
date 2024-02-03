/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_min_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 21:57:05 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <limits.h>
#include <stdlib.h>

int	min_test(void)
{
	if (ft_atoi("–2147483648") != INT_MIN)
		return (-1);
	return (0);
}
