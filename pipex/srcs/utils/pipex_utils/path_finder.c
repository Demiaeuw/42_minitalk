/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path_finder.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acabarba <acabarba@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:51:23 by acabarba          #+#    #+#             */
/*   Updated: 2024/04/29 18:29:13 by acabarba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../include/include.h"

char	path_finder(char *cmd, char **envp)
{
	/**
	 * Déclaration des variables : Les variables paths, path, i, et part_path sont déclarées.
	 * pathing est un tableau de chaînes qui contiendra les différents chemins d’accès dans la variable d’environnement PATH.
	 * path est une chaîne qui contiendra le chemin d’accès complet de la commande.
	 * path_partiel est une chaîne qui contiendra le chemin d’accès partiel.
	*/
	int		i;
	char	*path;
	char	*path_partiel;
	char	**pathing;

	i = 0;
	/**
	 * Trouver la variable PATH :
	 * La boucle while au début est utilisée pour trouver la variable PATH dans l’environnement envp.
	 * ft_strnstr est une fonction qui cherche la sous-chaîne “PATH” dans chaque chaîne de envp.
	 * Si “PATH” n’est pas trouvé, i est incrémenté pour passer à la chaîne suivante.
	*/
	while (ft_strnstr(envp[i], "PATH", 4) == 0)
		i++;
	/**
	 * Diviser PATH en différents chemins : Une fois que PATH est trouvé,
	 * ft_split est utilisé pour diviser la valeur de PATH en différents chemins.
	 * envp[i] + 5 est utilisé pour ignorer le préfixe “PATH=” et obtenir
	 * seulement la valeur de PATH. Les différents chemins sont séparés par des deux-points (:).
	*/
	path = ft_split(envp[i] + 5, ":");
	/**
	 * Rechercher la commande dans chaque chemin : La deuxième boucle while parcourt chaque chemin dans pathing.
	 * Pour chaque chemin, elle ajoute un slash (/) à la fin du chemin, puis ajoute le nom de la commande.
	 * access est ensuite utilisé pour vérifier si un fichier avec ce chemin d’accès et ce nom existe.
	 * Si c’est le cas, le chemin d’accès complet de la commande est renvoyé.
	*/
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
	/**
	 * Nettoyage : Si la commande n’est trouvée dans aucun des chemins,
	 * la fonction nettoie la mémoire allouée pour paths et renvoie 0.
	*/
	free_str_tab(pathing);
	return (0);
}