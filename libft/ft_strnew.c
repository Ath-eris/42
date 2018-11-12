#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *tab;
	size_t i;
	
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (tab[i])
	{
		tab[size] = '\0';
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
