/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:00:00 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 19:29:57 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/include.h"

/**
 * Function which creates the cmd, 
 * searches for possible paths, 
 * checks if it exists 
 * and executes the command.
*/
void	cmd_manager(int ac, char **av, char **envp)
{
	int		i;
	char	*path;
	char	**cmd;

	(void)ac;
	i = 0;
	cmd = ft_split(av, ' ');
	path = path_finder(cmd[0], envp);
	if (!path)
		errorpathing(cmd);
	if (execve(path, cmd, envp) == -1)
		errorcall(errorexec);
	return ;
}
