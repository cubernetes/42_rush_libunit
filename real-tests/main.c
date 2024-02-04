/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:10:54 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:17:24 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "include/libft_unit_tests.h"

int	main(void)
{
	abs_launcher();
	strlen_launcher();
	min_launcher();
	atoi_launcher();
	isdigit_launcher();
	isascii_launcher();
	free_all_ptrs();
	return (0);
}
