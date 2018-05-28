#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	n(void)
{
	system("/bin/cat /home/user/level7/.pass");
	return (0);
}

int	m(void)
{
	puts("Nope");
	return (0);
}

int	main(int argc, char **argv)
{
	char	*p1;
	int	(*p2)(void);

	p1 = malloc(64);
	p2 = malloc(4);

	*p2 = m;
	strcpy(p1, argv[1]);
	p2();
	return (0);
}
