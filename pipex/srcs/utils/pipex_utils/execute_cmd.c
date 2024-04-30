/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cmd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 19:00:00 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/01 01:34:52 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/include.h"

/**
 * Function which creates the cmd, 
 * searches for possible paths, 
 * checks if it exists 
 * and executes the command.
*/

/**
 * Cette fonction gère la gestion d'une commande. 
 * Elle crée la commande en utilisant les arguments passés en paramètres. 
 * Ensuite, elle recherche les chemins possibles où se trouve la commande. 
 * Si elle trouve le chemin, elle vérifie si la commande existe et la execute en utilisant execve.
 * Si une erreur se produit, elle appelle la fonction d'erreur correspondante.
 * @param ac le nombre d'arguments passés en paramètres
 * @param av les arguments passés en paramètres
 * @param envp les environnements passés en paramètres
 * @return aucune
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


