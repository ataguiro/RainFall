#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*p(void)
{
	void	*tmp;
	char	buffer[64];

	fflush(stdout);
	gets(buffer);

	register void *p asm("ebp+0x4");
	if ((p & 0xb0000000) - 0xb0000000) {
		printf("(%p)\n", p);
		exit(1);
	}
	puts(buffer);
	return (strdup(buffer));
}

int	main(void)
{
	return (p());
}
