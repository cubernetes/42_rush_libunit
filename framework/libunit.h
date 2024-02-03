/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:45:56 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 01:13:58 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H 1

# include "../libft/libft.h"

typedef struct s_test
{
	char	*name;
	int		(*func)(void);
}			t_test;

int			launch_tests(t_ddeque *tests, char *routine_name);
void		load_test(t_ddeque *tests, char *name, int (*func)(void));

#endif /* libunit.h. */
