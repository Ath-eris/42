#include <stdio.h>
#include <fcntl.h>

int	check_file(int fd);

int	main(int ac, char **av)
{
	const char	*file = av[1];
	int			fd = open(file, O_RDONLY);
	
	if (ac)
		printf("Retour : %d\n", check_file(fd));
	return (0);
}
