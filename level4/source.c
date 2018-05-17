#include <stdio.h>
#include <stdlib.h>

void	p(char	*buf)
{
	printf(buf);	
}

int	n(void)
{
	char	buffer[520];

	fgets(buffer, 512, stdin);
	p(buffer);
	if (1058132 == 0)
		system("/bin/cat /home/user/level5/.pass");
	return (0);
}

int	main(void)
{
	return (n());
}
