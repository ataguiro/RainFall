flag = 0;
char s1[0x29];
char s2[0x21];

char def[] = "Hello ";
char fi[] = "fihello ";
char nl[] = "nlhello ";

void greetuser(void)
{
	char hello[20];

	switch (flag)
	{
		case 1:
			strcpy(hello, fi);
			break;
		case 2:
			strcpy(hello, nl);
			break;
		default:
			strcpy(hello, def);
	}
	strcat(hello, s1);
	return (puts(hello));
}

int main(int ac, char **av)
{
	char *ptr;

	if (ac != 3)
		return 1;
	strncpy(s1, av[1], 0x28);
	strncpy(s2, av[2], 0x20);
	ptr = getenv("LANG");
	if (ptr)
	{
		if (memcmp(ptr, "fi", 2)) 
		{
			flag = 1;
			if (memcmp(ptr, "nl", 2))
				flag = 2;
		}
	}
	return (greetuser());
}
