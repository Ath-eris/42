#include "libft.h"

int	ft_isalnum(int c)
{
	if (isalpha(c) || isdigit(c))
		return (1);
	else
		return (0);
}
