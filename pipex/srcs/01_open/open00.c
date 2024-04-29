/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 12:06:31 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 13:04:31 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/include.h"

void	read_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE + 1];
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		errorcall(erroropen);
	while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
	{
		buffer[bytes_read] = '\0';
		ft_printf("%s", buffer);
	}
	if (bytes_read == -1)
		errorcall(errorread);
	if (close(fd) == -1)
		errorcall(errorclose);
	return ;
}