/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:51:23 by acabarba          #+#    #+#             */
/*   Updated: 2024/05/01 01:37:47 by acabarba         ###   ########.fr       */
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

/**
 * Cette fonction cherche la variable PATH dans l'environnement en parcourant chaque variable
 * jusqu'à trouver celle-ci. Ensuite, elle divise le contenu de cette variable en plusieurs
 * chemins séparés par ':'. Pour chaque chemin, elle le concatène avec le nom de la commande
 * fournie en paramètre. Elle vérifie si le chemin existe en utilisant la fonction access().
 * Si le chemin existe, elle retourne le chemin complet créé. Si elle ne trouve pas de chemin
 * valide, elle libère la mémoire occupée par la table de chaines et retourne '0'.
 *
 * @param cmd le nom de la commande à rechercher
 * @param envp l'environnement à parcourir
 * 
 * @return le chemin complet de la commande si trouvé, sinon 0
 */
char	path_finder(char *cmd, char **envp)
{
	int		i;
	char	*path;
	char	*path_partiel;
	char	**pathing;

	// Parcours de l'environnement jusqu'à trouver la variable PATH
	i = 0;
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;

	// Divise le contenu de la variable PATH en plusieurs chemins
	path = ft_split(envp[i] + 5, ":");

	// Parcours des chemins trouvés
	i = -1;
	while (pathing[++i])
	{
		// Concatène le chemin avec le nom de la commande
		path_partiel = ft_strjoin(pathing[i], "/");
		path = ft_strjoin(path_partiel, cmd);
		free(path_partiel);

		// Vérifie si le chemin existe
		if (access(path, F_OK) == 0)
			return (path);

		// Libère la mémoire occupée par le chemin
		free(path);
	}

	// Libère la mémoire occupée par la table de chaines
	free_str_tab(pathing);

	// Retourne 0 car aucun chemin valide n'a été trouvé
	return (0);
}

