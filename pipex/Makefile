# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acabarba <acabarba@student.42Perpignan.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/12 12:27:51 by acabarba          #+#    #+#              #
#    Updated: 2024/04/12 12:27:51 by acabarba         ###   ########.fr        #
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
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Règle par défaut
all: printhader printactionobj $(NAME) printactionobjok printend
rapide: $(NAME)

# Règle pour créer l'exécutable
$(NAME): $(OBJS) $(OBJSUTILS)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OBJSUTILS)

# Règle pour nettoyer les fichiers objets
clean:
	@$(RM) $(OBJS) $(OBJSUTILS)

fclean: clean
	@$(RM) $(NAME) $(NAMECHECK)
	$(MAKE) printendclean

re: fclean all

# Règle d'affichage
printhader: 
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m ____________________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|____________________________________|\033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "  _____ _                 "
	@sleep 0.1
	@echo " |  __ (_)                "
	@sleep 0.1
	@echo " | |__) | _ __   _____  __"
	@sleep 0.1
	@echo " |  ___/ | |_ \ / _ \ \/ /"
	@sleep 0.1
	@echo " | |   | | |_) |  __/>  < "
	@sleep 0.1
	@echo " |_|   |_| .__/ \___/_/\_\"
	@sleep 0.1
	@echo "         | |              "
	@sleep 0.1
	@echo "         |_|              "
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m ____________________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|____________________________________|\033[0m"
	@sleep 0.1
	@echo "\033[97m                                      \033[0m"
	@sleep 0.1
	@echo "                                                   "
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
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   Utilitaire : \033[94m?????????????\033[0m est utilisable."
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1

printendclean:
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   Tous les fichiers sont supprimé 🚮"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   \033[32mMerci d'avoir utilisé\033[0m \033[94m?????????????\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1