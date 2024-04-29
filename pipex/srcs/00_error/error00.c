/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 15:34:47 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 16:42:29 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

void	errorcall(void (*f)())
{
	f();
	ft_printf("\n");
	exit(EXIT_FAILURE);
}

void	errorbase(void)
{
	perror("\n\033[31mError \033[0m");
	return ;
}

void	errorargument(void)
{
	perror("\n\033[31mError \033[0m");
	ft_putendl_fd("\nProblem with argument", 1);
	return ;
}
