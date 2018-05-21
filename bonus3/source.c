#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	FILE	*p;
	char	buf[0x43];
	char	buf2[0x42];
	int	n;

	p = fopen("/home/user/end/.pass", "r");
	if (!p || ac != 2)
		return -1;
	fread(buf, 1, 0x42, p);
	n = atoi(av[1]);
	buf[n] = 0;
	fread(buf, 1, 0x41, p);
	fclose(p);
	if (!strcmp(buf, av[1]))
		execl("/bin/sh", "sh", (void *)0);
	else
		puts(buf2);
	return -1;
}
