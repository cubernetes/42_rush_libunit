/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_abs_zero_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:25:48 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdlib.h>

int	abs_zero_test(void)
{
	if (ft_abs(0) != abs(0))
		return (-1);
	return (0);
}
