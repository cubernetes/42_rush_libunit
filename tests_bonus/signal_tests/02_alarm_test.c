/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_alarm_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:25:33 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft/libft.h"
#include <unistd.h>

int	alarm_test(void)
{
	alarm(2);
	while (1)
	{
	}
	return (-1);
}