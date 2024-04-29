/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:51:23 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 19:27:02 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/include.h"

/**
 * Search for the path variable, 
 * divide path into different paths, 
 * check if the path exists, 
 * search for the cmd of each path and create it, 
 * return the path if everything is good.
*/
char	path_finder(char *cmd, char **envp)
{
	int		i;
	char	*path;
	char	*path_partiel;
	char	**pathing;

	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	path = ft_split(envp[i] + 5, ":");
	i = -1;
	while (pathing[++i])
	{
		path_partiel = ft_strjoin(pathing[i], "/");
		path = ft_strjoin(path_partiel, cmd);
		free(path_partiel);
		if (access(path, F_OK) == 0)
			return (path);
		free(path);
	}
	free_str_tab(pathing);
	return (0);
}
