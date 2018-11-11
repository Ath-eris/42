#include "libft.h"

int	atoi(const char *nptr)
{
	int i;
	int nb;
	int signe;

	i = 0;
	nbr = 0;
	signe = 1;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') || (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
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
