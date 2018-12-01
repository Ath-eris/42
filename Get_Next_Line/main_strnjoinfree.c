#include <stdio.h>
#include "libft/libft.h"

int main()
{
	char *s1;
	char *s2;
	char *s3;

	s1 = ft_strdup("Coucou");
	s2 = ft_strdup("123456");
	s3 = ft_strnjoinfree(s1, s2, 5, 3);
	printf("Result : %s\n", s3);
}
