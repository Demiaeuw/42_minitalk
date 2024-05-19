# Nom de l'executable
NAMECLIENT = client
NAMESERVER = server

# Fichiers source
SRCSCLIENT =	mainclient.c

UTILSCLIENT =	

OTHERCLIENT = srcs/utils/ft_printf/ft_printf00.c\
	srcs/utils/ft_printf/ft_printf01.c\
	srcs/utils/ft_printf/ft_printf02.c\
	srcs/utils/gnl/get_next_line00.c\
	srcs/utils/gnl/get_next_line01.c\
	srcs/utils/libft/free_str_tab.c\
	srcs/utils/libft/free_str.c\
	srcs/utils/libft/ft_atoi.c\
	srcs/utils/libft/ft_bzero.c\
	srcs/utils/libft/ft_calloc.c\
	srcs/utils/libft/ft_isalnum.c\
	srcs/utils/libft/ft_isalpha.c\
	srcs/utils/libft/ft_isascii.c\
	srcs/utils/libft/ft_isdigit_str.c\
	srcs/utils/libft/ft_isdigit.c\
	srcs/utils/libft/ft_isprint.c\
	srcs/utils/libft/ft_itoa.c\
	srcs/utils/libft/ft_lstadd_back.c\
	srcs/utils/libft/ft_lstadd_front.c\
	srcs/utils/libft/ft_lstclear.c\
	srcs/utils/libft/ft_lstdelone.c\
	srcs/utils/libft/ft_lstiter.c\
	srcs/utils/libft/ft_lstlast.c\
	srcs/utils/libft/ft_lstmap.c\
	srcs/utils/libft/ft_lstnew.c\
	srcs/utils/libft/ft_lstsize.c\
	srcs/utils/libft/ft_memchr.c\
	srcs/utils/libft/ft_memcmp.c\
	srcs/utils/libft/ft_memcpy.c\
	srcs/utils/libft/ft_memmove.c\
	srcs/utils/libft/ft_memset.c\
	srcs/utils/libft/ft_putchar_fd.c\
	srcs/utils/libft/ft_putendl_fd.c\
	srcs/utils/libft/ft_putnbr_fd.c\
	srcs/utils/libft/ft_putstr_fd.c\
	srcs/utils/libft/ft_split.c\
	srcs/utils/libft/ft_strchr.c\
	srcs/utils/libft/ft_strdup.c\
	srcs/utils/libft/ft_striteri.c\
	srcs/utils/libft/ft_strjoin.c\
	srcs/utils/libft/ft_strlcat.c\
	srcs/utils/libft/ft_strlcpy.c\
	srcs/utils/libft/ft_strlen.c\
	srcs/utils/libft/ft_strmapi.c\
	srcs/utils/libft/ft_strncmp.c\
	srcs/utils/libft/ft_strnstr.c\
	srcs/utils/libft/ft_strrchr.c\
	srcs/utils/libft/ft_strtrim.c\
	srcs/utils/libft/ft_substr.c\
	srcs/utils/libft/ft_tolower.c\
	srcs/utils/libft/ft_toupper.c

SRCSSERVER =	mainserver.c

UTILSSERVER =	

OTHERSERVER = srcs/utils/ft_printf/ft_printf00.c\
	srcs/utils/ft_printf/ft_printf01.c\
	srcs/utils/ft_printf/ft_printf02.c\
	srcs/utils/gnl/get_next_line00.c\
	srcs/utils/gnl/get_next_line01.c\
	srcs/utils/libft/free_str_tab.c\
	srcs/utils/libft/free_str.c\
	srcs/utils/libft/ft_atoi.c\
	srcs/utils/libft/ft_bzero.c\
	srcs/utils/libft/ft_calloc.c\
	srcs/utils/libft/ft_isalnum.c\
	srcs/utils/libft/ft_isalpha.c\
	srcs/utils/libft/ft_isascii.c\
	srcs/utils/libft/ft_isdigit_str.c\
	srcs/utils/libft/ft_isdigit.c\
	srcs/utils/libft/ft_isprint.c\
	srcs/utils/libft/ft_itoa.c\
	srcs/utils/libft/ft_lstadd_back.c\
	srcs/utils/libft/ft_lstadd_front.c\
	srcs/utils/libft/ft_lstclear.c\
	srcs/utils/libft/ft_lstdelone.c\
	srcs/utils/libft/ft_lstiter.c\
	srcs/utils/libft/ft_lstlast.c\
	srcs/utils/libft/ft_lstmap.c\
	srcs/utils/libft/ft_lstnew.c\
	srcs/utils/libft/ft_lstsize.c\
	srcs/utils/libft/ft_memchr.c\
	srcs/utils/libft/ft_memcmp.c\
	srcs/utils/libft/ft_memcpy.c\
	srcs/utils/libft/ft_memmove.c\
	srcs/utils/libft/ft_memset.c\
	srcs/utils/libft/ft_putchar_fd.c\
	srcs/utils/libft/ft_putendl_fd.c\
	srcs/utils/libft/ft_putnbr_fd.c\
	srcs/utils/libft/ft_putstr_fd.c\
	srcs/utils/libft/ft_split.c\
	srcs/utils/libft/ft_strchr.c\
	srcs/utils/libft/ft_strdup.c\
	srcs/utils/libft/ft_striteri.c\
	srcs/utils/libft/ft_strjoin.c\
	srcs/utils/libft/ft_strlcat.c\
	srcs/utils/libft/ft_strlcpy.c\
	srcs/utils/libft/ft_strlen.c\
	srcs/utils/libft/ft_strmapi.c\
	srcs/utils/libft/ft_strncmp.c\
	srcs/utils/libft/ft_strnstr.c\
	srcs/utils/libft/ft_strrchr.c\
	srcs/utils/libft/ft_strtrim.c\
	srcs/utils/libft/ft_substr.c\
	srcs/utils/libft/ft_tolower.c\
	srcs/utils/libft/ft_toupper.c

# Fichiers objets
OBJSCLIENT = $(SRCSCLIENT:.c=.o) $(UTILSCLIENT:.c=.o) $(OTHERCLIENT:.c=.o)

OBJSSERVER = $(SRCSSERVER:.c=.o) $(UTILSSERVER:.c=.o) $(OTHERSERVER:.c=.o)

# Flags de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Règle par défaut
all: client server printend

client: printhader printclient printactionobj $(OBJSCLIENT) printactionobjok
	@$(CC) $(CFLAGS) -o $(NAMECLIENT) $(OBJSCLIENT)

server: printhader printserveur printactionobj $(OBJSSERVER) printactionobjok
	@$(CC) $(CFLAGS) -o $(NAMESERVER) $(OBJSSERVER)

rapide: rapideclient rapideserveur

rapideclient: $(OBJSCLIENT)
	@$(CC) $(CFLAGS) -o $(NAMECLIENT) $(OBJSCLIENT)

rapideserveur: $(OBJSSERVER)
	@$(CC) $(CFLAGS) -o $(NAMESERVER) $(OBJSSERVER)



# Règle pour nettoyer les fichiers objets
execlient: client clean
exeserveur: serveur clean

clean:
	@$(RM) $(OBJSCLIENT) $(OBJSUTILSCLIENT) $(OBJSOTHERCLIENT) $(OBJSSERVER) $(OBJSUTILSSERVER) $(OBJSOTHERSERVER)

fclean: clean
	@$(RM) $(NAMECLIENT) $(NAMESERVER)
	@$(MAKE) printendclean

re: fclean all

#----------------------------------------------------------------------------

# Règle d'affichage
printhader: 
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "  __  __ _       _ _        _ _    "
	@sleep 0.1
	@echo " |  \/  (_)     (_) |      | | |   "
	@sleep 0.1
	@echo " | \  / |_ _ __  _| |_ __ _| | | __"
	@sleep 0.1
	@echo " | |\/| | | |_ \| | __/ _| | | |/ /"
	@sleep 0.1
	@echo " | |  | | | | | | | || (_| | |   < "
	@sleep 0.1
	@echo " |_|  |_|_|_| |_|_|\\__\\____|_|_|\\_\\"
	@sleep 0.1
	@echo "                                   "
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "\033[97m                                                   \033[0m"
	@sleep 1

printactionobj:
	@echo " "
	@echo " "
	@sleep 0.5
	@echo "\033[97m   Compilation des\033[0m \033[38;5;208mfichiers OBJET\033[0m --> 💻"
	@echo " "
	@echo " "
	@sleep 0.5

printactionobjok:
	@echo " "
	@echo " "
	@sleep 0.5
	@echo "   Compilation des \033[32mfichiers OBJET\033[0m --> ✅"
	@echo " "
	@echo " "
	@sleep 0.5

printend:
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   Utilitaire : \033[94m./minitalk\033[0m est utilisable."
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1

printendclean:
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@echo " "
	@sleep 0.1
	@echo "   Tous les fichiers sont supprimé 🚮"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "   \033[32mMerci d'avoir utilisé\033[0m \033[94mMinitalk\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo " "
	@sleep 0.1

printclient:
	@sleep 0.1
	@echo "\033[38;5;121m                                                   "
	@sleep 0.1
	@echo "   _____ _ _            _   "
	@sleep 0.1
	@echo "  / ____| (_)          | |  "
	@sleep 0.1
	@echo " | |    | |_  ___ _ __ | |_ "
	@sleep 0.1
	@echo " | |    | | |/ _ \ '_ \| __|"
	@sleep 0.1
	@echo " | |____| | |  __/ | | | |_ "
	@sleep 0.1
	@echo "  \_____|_|_|\___|_| |_|\__|"
	@sleep 0.1
	@echo "                            \033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "\033[97m                                                   \033[0m"

printserveur:
	@sleep 0.1
	@echo "\033[38;5;208m                                                   "
	@sleep 0.1
	@echo "   _____                          "
	@sleep 0.1
	@echo "  / ____|                         "
	@sleep 0.1
	@echo " | (___   ___ _ ____   _____ _ __ "
	@sleep 0.1
	@echo "  \___ \ / _ \ '__\ \ / / _ \ '__|"
	@sleep 0.1
	@echo "  ____) |  __/ |   \ V /  __/ |   "
	@sleep 0.1
	@echo " |_____/ \___|_|    \_/ \___|_|   "
	@sleep 0.1
	@echo "                                  \033[0m"
	@sleep 0.1
	@echo "                                                   "
	@sleep 0.1
	@echo "\033[94m _______________________________ \033[0m"
	@sleep 0.1
	@echo "\033[94m|_______________________________|\033[0m"
	@sleep 0.1
	@echo "\033[97m                                                   \033[0m"
