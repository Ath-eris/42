#include "libft.h"

int	atoi(const char *str)
{
	int i;
	int nb;
	int signe;

	i = 0;
	nbr = 0;
	signe = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		signe = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9'))
	{
		nb = nb * 10 + (int)str[i] - '0';
		i++;
	}
	return (nb * signe);
}
