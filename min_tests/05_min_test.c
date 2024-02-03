/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_min_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 17:03:22 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <limits.h>

int	min_test(void)
{
	if (ft_min(INT_MIN, 0) != INT_MIN)
		return (-1);
	return (0);
}
