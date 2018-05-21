#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char	*a = "auth ";
char	*b = "reset";
char	*c = "service";
char	*d = "login";

char	*auth;
char	*service;

int	main(void)
{
	char	buf[128];
	int	i;

	while (1) {
		printf("%p, %p \n", auth, service);
		
		if (!fgets(buf, 128, stdin))
			break;

		i = 0;
		while (a[i] == buf[i] && i++ < 5);
		if (a[i] != buf[i])
			goto reset;

		auth = malloc(4);

		i = 5;
		while (buf[i++]);
		if ((i - 5) > 30)
			goto reset;
		strcpy(auth, &buf[5]);
	
reset:
		i = 0;
		while (b[i] == buf[i] && i++ < 5);
		if (b[i] != buf[i])
			goto service;
		free(auth);

service:
		i = 0;
		while (c[i] == buf[i] && i++ < 6);
		if (c[i] != buf[i])
			goto login;
		service = strdup(&buf[7]);
login:
		i = 0;
		while (c[i] == buf[i] && i++ < 5);
		if (d[i] == buf[i]) {
			if (*auth == *(auth + 20))
				system("/bin/sh");
			else
				fwrite("Password:\n", 1, 10, stdout);
		}
	}
	return (0);
}
