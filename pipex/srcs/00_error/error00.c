/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:34:47 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 19:21:46 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

void	errorcall(void (*f)())
{
	f();
	ft_putendl_fd("", 2);
	exit(EXIT_FAILURE);
}

void	errorbase(void)
{
	perror("\n\033[31mError \033[0m");
	ft_putendl_fd("", 2);
	return ;
}

void	errorargument(void)
{
	perror("\n\033[31mError \033[0m");
	ft_putendl_fd("\nProblem with argument", 2);
	return ;
}

void	errorexec(void)
{
	perror("\n\033[31mError \033[0m");
	ft_putendl_fd("\nProblem when execute", 2);
	return ;
}

void	errorpathing(char **cmd)
{
	free_str_tab(cmd);
	perror("\n\033[31mError \033[0m");
	ft_putendl_fd("\nProblem with path_finder", 2);
	exit(EXIT_FAILURE);
	return ;
}
