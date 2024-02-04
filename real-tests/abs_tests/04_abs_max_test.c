/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_abs_max_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:25:54 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <limits.h>
#include <stdlib.h>

int	abs_max_test(void)
{
	if (ft_abs(INT_MAX) != abs(INT_MAX))
		return (-1);
	return (0);
}
