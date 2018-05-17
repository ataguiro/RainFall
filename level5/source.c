#include <stdlib.h>
#include <stdio.h>

void	o(void)
{
	system("/bin/sh");
	exit(1);
}


int	n(void)
{
	char	buffer[520];

	fgets(buffer, 512, stdin);
	printf(buffer);
	exit(1);
}

int	main(void)
{
	return (n());
}
