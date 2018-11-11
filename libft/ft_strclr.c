#include "libft.h"

void	ft_strclr(char *s)
{
	int i;

	i = strlen(s);
	while (i >= 0)
	{
		s[i] = '\0';
		i--;
	}
}
