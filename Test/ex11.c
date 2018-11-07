#include <stdio.h>
#include <stdlib.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int x;
		int y;
		int *div = &x;
		int *mod = &y;
		ft_div_mod(a, b, div, mod);
		printf("Valeur de div : %d\nValeur de mod : %d", x, y);
	}
	return (0);
}
