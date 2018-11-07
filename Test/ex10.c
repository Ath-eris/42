#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int x;
		int y;
		int *a;
		int *b;

		a = &x;
		b = &y;
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("Valeur de x avant : %d\n", *a);
		printf("Valeur de y avant : %d\n", *b);
		ft_swap(a, b);
		printf("Valeur de x apres : %d\n", *a);
		printf("Valeur de y apres : %d\n", *b);

	}
}
