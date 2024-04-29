#ifndef INCLUDE_H
# define INCLUDE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <fcntl.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>
# include "ft_printf.h"
# include "get_next_line.h"
# include "libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

int	main(int ac, char **av);

/*			ERROR			*/
void	errorcall(void (*f)());
void	erroropen(void);
void	errorread(void);
void	errorclose(void);

/*			OPEN			*/
void	read_file(char *filename);

/*			UTILS			*/

#endif