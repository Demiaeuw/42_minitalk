/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:41:38 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/28 17:10:33 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

static int	g_next_char_ok;

static void	ft_signalhandler(int signal, siginfo_t *sinfo, void *context)
{
	(void)sinfo;
	(void)context;
	if (signal == SIGUSR1)
		g_next_char_ok = 1;
	if (signal == SIGUSR2)
	{
		ft_printf("All Message received\n");
		exit(EXIT_SUCCESS);
	}	
}

static void	ft_bitsend(char c, int bit, int pid)
{
	if (c & (128 >> bit))
	{
		if (kill(pid, SIGUSR2) == -1)
			ft_putendl_fd("\033[31mError\033[0m SIGSUSR2\n", 2);
	}
	else
	{
		if (kill(pid, SIGUSR1) == -1)
			ft_putendl_fd("\033[31mError\033[0m SIGSUSR1\n", 2);
	}
}

static void	ft_convert_charbin(char c, int pid)
{
	int	bit;
	int	timeout;

	bit = 0;
	timeout = 0;
	while (bit < 8)
	{
		g_next_char_ok = 0;
		ft_bitsend(c, bit, pid);
		while (!g_next_char_ok)
		{
			if (timeout >= 3)
			{
				ft_putendl_fd("\033[31mTimeout\033[0m\n", 2);
				return ;
			}
			timeout++;
			usleep(1000);
		}
		timeout = 0;
		bit++;
		usleep(100);
	}	
}

static void	ft_send_text(char *str, int len, int pid)
{
	int	i;

	i = 0;
	while (i <= len)
	{
		ft_convert_charbin(str[i], pid);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int					pid;
	struct sigaction	signal;

	if (argc != 3)
	{
		ft_putendl_fd("\033[31mWrong\033[0m number of arguments\n", 2);
		return (1);
	}
	pid = ft_atoi(argv[1]);
	if (!pid)
	{
		ft_putendl_fd("\033[31mWrong\033[0m pid\n", 2);
		return (1);
	}
	sigemptyset(&signal.sa_mask);
	signal.sa_flags = SA_SIGINFO;
	signal.sa_sigaction = ft_signalhandler;
	sigaction(SIGUSR1, &signal, NULL);
	sigaction(SIGUSR2, &signal, NULL);
	ft_send_text(argv[2], ft_strlen(argv[2]), pid);
	return (0);
}
