/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_fpe_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 00:32:04 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 23:16:49 by pvasilan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define _GNU_SOURCE
#include "../../libft/libft.h"
#include <stdlib.h>
#include <fenv.h>

int	fpe_test(void)
{
	float	f;

	feenableexcept(FE_DIVBYZERO);
	f = 10.0 / 0.0;
	if (1)
		return (-1);
	return (0);
}
