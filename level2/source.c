#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*p(void *addr)
{
	void	*tmp;
	char	buffer[64];

	fflush(stdout);
	gets(buffer);

	if ((p & addr) - addr) {
		printf("(%p)\n", p);
		exit(1);
	}
	puts(buffer);
	return (strdup(buffer));
}

int	main(void)
{
	return (p(0xb0000000));
}
