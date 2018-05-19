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
	long	*p2;

	p1 = malloc(64);
	p2 = malloc(8);

	memcpy(p2, (long)m, 8);
	printf("%llx\n", *p2);
	printf("%p\n", m);

/*	strcpy(p1, argv[1]); */
/*	p2();	*/
// TODO: Not finished
	return (0);
}
