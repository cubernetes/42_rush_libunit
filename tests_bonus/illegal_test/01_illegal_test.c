/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_illegal_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 22:49:09 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

int	illegal_test(void)
{
	 asm("ud2");
	if (1)
		return (-1);
	return (0);
}
