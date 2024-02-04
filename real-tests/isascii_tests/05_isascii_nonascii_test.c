/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_isascii_nonascii_test.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:15:19 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdlib.h>

int	isascii_nonascii_test(void)
{
	if (!ft_isascii(129))
		return (0);
	return (-1);
}
