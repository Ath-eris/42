#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t size;
	size_t i;
	char *tab;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(tab = malloc(sizeof(char) * size)))
		return (NULL);
	i = 0;
	while (s1[i])
	{
		tab[i] =s1[î];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		tab[i] =s2[î];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
