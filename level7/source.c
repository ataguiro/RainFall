#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char	ptr[68];

int	m(void)
{
	printf("%s - %d\n", ptr, time(0));
	return (0);
}

int	main(int argc, char **argv)
{
	char	*tmp;
	char	*tmp2;

	tmp = malloc(8);
	*tmp = 1;

	tmp[1] = malloc(8);

	tmp2 = malloc(8);
	*tmp2 = 2;
	
	tmp2[1] = malloc(8);

	strcpy(tmp + 4, argv[1]);
	strcpy(tmp2 + 4, argv[2]);

	fgets(ptr, 0x44, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
	return (0);
}
