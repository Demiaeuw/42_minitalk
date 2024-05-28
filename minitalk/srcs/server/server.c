/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:41:56 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/28 17:11:33 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

static void	ft_charsend(char c)
{
	static char	*str;
	char		*tmp;

	if (!str)
	{
		str = malloc(1);
		*str = '\0';
	}
	tmp = malloc(2);
	*tmp = c;
	*(tmp + 1) = '\0';
	str = ft_strjoin(str, tmp);
	if (c == 0)
	{
		ft_printf("%s\n", str);
		free(str);
		str = NULL;
	}
	free(tmp);
}

void	ft_signalhandler(int signal, siginfo_t *sinfo, void *context)
{
	static int		c;
	static int		bit;
	static pid_t	client_pid;

	(void)context;
	if (!c || client_pid != sinfo->si_pid)
	{
		c = 255;
		bit = 0;
	}
	client_pid = sinfo->si_pid;
	if (signal == SIGUSR1)
		c ^= (128 >> bit);
	else if (signal == SIGUSR2)
		c |= (128 >> bit);
	if (++bit == 8)
	{
		ft_charsend(c);
		if (c == 0)
			kill(client_pid, SIGUSR2);
		bit = 0;
		c = 255;
	}
	usleep(100);
	kill(client_pid, SIGUSR1);
}

int	main(void)
{
	int					pid;
	struct sigaction	signal;

	pid = getpid();
	ft_printf("Server PID : %d\n", pid);
	sigemptyset(&signal.sa_mask);
	signal.sa_flags = SA_SIGINFO;
	signal.sa_sigaction = ft_signalhandler;
	sigaction(SIGUSR1, &signal, 0);
	sigaction(SIGUSR2, &signal, 0);
	ft_printf("Waiting for client...\n");
	while (1)
		pause();
	return (EXIT_FAILURE);
}
