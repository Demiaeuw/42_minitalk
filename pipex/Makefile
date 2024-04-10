# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:43:59 by acabarba          #+#    #+#              #
#    Updated: 2024/04/10 15:43:59 by acabarba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'executable
NAME = ???

# Fichiers source
SRCS =	???

UTILS =	???

# Fichiers objets
OBJS = $(SRCS:.c=.o)
OBJSUTILS = $(UTILS:.c=.o)

# Flags de compilation
CFLAGS = -Wall -Wextra -Werror

# Règle par défaut
all: printhader printactionobj $(NAME) printend

# Règle pour créer l'exécutable
$(NAME): $(OBJS) $(OBJSUTILS)
	???

# Règle pour nettoyer les fichiers objets
clean:
	???

fclean: clean
	???
	$(MAKE) printendclean

re: fclean all

# Règle d'affichage
printhader: 
	@sleep 1
	???? ASCII ART
	@sleep 1

printactionobj:
	@echo " "
	@echo " "
	@sleep 1
	@echo "\033[97m   Compilation des\033[0m \033[38;5;208mfichiers OBJET\033[0m --> 💻"
	@echo " "
	@echo " "
	@sleep 1

printactionobjok:
	@echo " "
	@echo " "
	@sleep 1
	@echo "   Compilation des \033[32mfichiers OBJET\033[0m --> ✅"
	@echo " "
	@echo " "
	@sleep 1

printend:
	@echo " "
	@echo " "
	@sleep 1
	@echo "   Utilitaire : \033[94m?????????????\033[0m est utilisable."
	@echo " "
	@echo " "
	@sleep 1

printendclean:
	@echo " "
	@echo " "
	@sleep 1
	@echo "   Tous les fichiers sont supprimé 🚮"
	@echo " "
	@echo " "
	@sleep 1
	@echo "   \033[32mMerci d'avoir utilisé\033[0m \033[94m?????????????\033[0m"
	@echo " "
	@echo " "
	@sleep 1