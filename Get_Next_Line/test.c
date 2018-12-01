#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int ac, char **av)
{
	char buf[300];
	const char *file = av[1];
	int fd = open(file, O_RDONLY);
	if (ac)
	{
		read(fd, buf, 10);
		printf("1) %s\n", buf);
		read(fd, buf, 10);
		printf("2) %s\n", buf);
		read(fd, buf, 10);
		printf("3) %s\n", buf);
	}
}
