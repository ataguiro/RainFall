#include <stdio.h>
#include <stdlib.h>

int	v(void)
{
	char	buffer[520];
	
	fgets(buffer, 512, stdin);
	printf(buffer);

	if (40 == 0) {
		fwrite("Wait what ?!\n", 1, 12, stdout);
		system("/bin/sh");
	}
	return (0);
}

int	main(void)
{
	return (v());
}

