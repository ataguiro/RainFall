#define NULL (void *)0

int main(int ac, char **av)
{
	int n = atoi(av[1]);
	char buf[0x24];

	if (n <= 9) {
		memcpy(buf, av[2], 0x24);
		if (n == 0x574f4c46)
			execl("/bin/sh", (char *[2]){"sh", NULL}, NULL);
	}
}
