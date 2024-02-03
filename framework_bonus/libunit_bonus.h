/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvasilan <pvasilan@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 19:45:56 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/03 18:49:07 by pvasilan         ###   ########.fr       */
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
