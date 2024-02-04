/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_segv_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkoca <dkoca@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 00:33:50 by dkoca             #+#    #+#             */
/*   Updated: 2024/02/04 00:33:53 by dkoca            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

#define ROUTINE_NAME "TESTS"

int segv_test(void);
int ok_test(void);
int ko_test(void);
int buserror_test(void);
int sigfpe_test(void);

#endif

