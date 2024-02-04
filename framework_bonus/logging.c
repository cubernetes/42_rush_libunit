/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logging.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:43:45 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 23:40:39 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit_bonus.h"
#include "../libft/libft.h"
#include <signal.h>
#include <unistd.h>

void	ft_log(int logfd, char *rname, char *tname, int status)
{
	if (status == 0)
		ft_dprintf(logfd, "%s: %s: [\033[32mOK\033[m]\n", rname, tname);
	else if (status == 255)
		ft_dprintf(logfd, "%s: %s: [\033[31mKO\033[m]\n", rname, tname);
	else if (status == SIGSEGV)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGSEGV\033[m]\n", rname, tname);
	else if (status == SIGBUS)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGBUS\033[m]\n", rname, tname);
	else if (status == SIGILL)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGILL\033[m]\n", rname, tname);
	else if (status == SIGABRT)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGABRT\033[m]\n", rname, tname);
	else if (status == SIGPIPE)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGPIPE\033[m]\n", rname, tname);
	else if (status == SIGFPE)
		ft_dprintf(logfd, "%s: %s: [\033[41;30mSIGFPE\033[m]\n", rname, tname);
	else if (status == SIGALRM)
		ft_dprintf(logfd, "%s: %s: [\033[43;30mSIGTIMEOUT (2 seconds)\033[m]\n",
			rname, tname);
	else
		ft_dprintf(logfd, "%s: %s: [\033[44;30mUNKNOWN ERROR/SIGNAL\033[m]\n",
			rname, tname);
}

void	print_status(int log_fd, char *r_name, char *testname, int status)
{
	ft_log(log_fd, r_name, testname, status);
	if (status == 0)
		ft_printf("%s: %s: [\033[32mOK\033[m]\n", r_name, testname);
	else if (status == 255)
		ft_printf("%s: %s: [\033[31mKO\033[m]\n", r_name, testname);
	else if (status == 254)
		ft_printf("%s: %s: [\033[31mKO (STDOUT)\033[m]\n", r_name, testname);
	else if (status == SIGSEGV)
		ft_printf("%s: %s: [\033[41;30mSIGSEGV\033[m]\n", r_name, testname);
	else if (status == SIGBUS)
		ft_printf("%s: %s: [\033[41;30mSIGBUS\033[m]\n", r_name, testname);
	else if (status == SIGILL)
		ft_printf("%s: %s: [\033[41;30mSIGILL\033[m]\n", r_name, testname);
	else if (status == SIGABRT)
		ft_printf("%s: %s: [\033[41;30mSIGABRT\033[m]\n", r_name, testname);
	else if (status == SIGPIPE)
		ft_printf("%s: %s: [\033[41;30mSIGPIPE\033[m]\n", r_name, testname);
	else if (status == SIGFPE)
		ft_printf("%s: %s: [\033[41;30mSIGFPE\033[m]\n", r_name, testname);
	else if (status == SIGALRM)
		ft_printf("%s: %s: [\033[43;30mSIGTIMEOUT (2 seconds)\033[m]\n",
			r_name, testname);
	else
		ft_printf("%s: %s: [\033[44;30mUNKNOWN ERROR/SIGNAL\033[m]\n",
			r_name, testname);
}

int	check_stdout(int log_fd, t_test *test, char *routine_name, int fds[3])
{
	char	buf;
	ssize_t	bytes_read;

	bytes_read = read(fds[0], &buf, 1);
	while (bytes_read)
	{
		if (*test->stdout++ != buf)
			return (print_status(log_fd, routine_name, test->name, 254), 1);
		bytes_read = read(fds[0], &buf, 1);
	}
	if (*test->stdout)
		return (print_status(log_fd, routine_name, test->name, 254), 1);
	return (0);
}
