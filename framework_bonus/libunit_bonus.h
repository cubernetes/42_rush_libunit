/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:45:56 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 21:50:41 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_BONUS_H
# define LIBUNIT_BONUS_H 1

# include "../libft/libft.h"

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
}			t_test;

int			launch_tests(t_ddeque *tests, char *routine_name);
void		load_test(t_ddeque *tests, char *name, int (*func)(void));

#endif /* libunit_bonus.h. */
