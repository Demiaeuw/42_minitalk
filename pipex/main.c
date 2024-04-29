#include "include/include.h"

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		read_file(av[1]);
	}
	else
		ft_printf("HelloWorld\n");
	return (0);
}
