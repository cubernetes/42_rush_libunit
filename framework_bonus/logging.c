/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logging.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tosuman <timo42@proton.me>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 22:43:45 by tosuman           #+#    #+#             */
/*   Updated: 2024/02/04 22:44:02 by tosuman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <signal.h>

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
