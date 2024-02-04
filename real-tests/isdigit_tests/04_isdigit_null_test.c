/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_isdigit_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:27:00 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdlib.h>

int	isdigit_null_test(void)
{
	if (ft_isdigit(0))
		return (-1);
	return (0);
}
