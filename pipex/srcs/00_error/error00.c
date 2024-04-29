/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:04:59 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 13:04:25 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

void	errorcall(void (*f)())
{
	f();
	exit(EXIT_FAILURE);
	return ;
}

void	erroropen(void)
{
	perror("\nError\n\nOpening File\n");
}

void	errorread(void)
{
	perror("\nError\n\nReading File\n");
}

void	errorclose(void)
{
	perror("\nError\n\nClosing File\n");
}
