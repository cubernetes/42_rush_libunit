/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_max_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 21:56:33 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <limits.h>
#include <stdlib.h>

int	max_test(void)
{
	if (ft_atoi("2147483647") != INT_MAX)
		return (-1);
	return (0);
}
