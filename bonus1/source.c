#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int n = atoi(av[1]);
	char buf[0x24];

	if (n <= 9) {
		memcpy(buf, av[2], n * 4);
		if (n == 0x574f4c46)
			execl("/bin/sh", "sh");
	}
}
