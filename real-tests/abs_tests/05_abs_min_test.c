/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_abs_min_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:09:30 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <limits.h>
#include <stdlib.h>

int	abs_min_test(void)
{
	if (ft_abs(INT_MIN) != (unsigned int)abs(INT_MIN))
		return (-1);
	return (0);
}
