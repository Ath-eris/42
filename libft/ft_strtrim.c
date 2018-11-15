#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	y;
	size_t	size;
	char	*tab;

	i = 0;
	size = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
			size++;
		i++;
	}
	if (!(tab = malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	y = 0;
	while (s[i])
	{
		if (s[i] != ' ' && s[i] != '\n' && s[i] != '\t')
		{
			tab[y] = s[i];
			y++;
		i++;
		}
	}
	return (tab);
}
