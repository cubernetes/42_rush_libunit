/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:10:54 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 20:38:38 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "include/signal_tests.h"

int	main(void)
{
	abort_launcher();
	alarm_launcher();
	fpe_launcher();
	illegal_launcher();
	return (0);
}
