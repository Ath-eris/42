#include "libft.h"

void	*memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	if (i = n)
		return (NULL);
	else
		return (&dest[i + 1]);
}
