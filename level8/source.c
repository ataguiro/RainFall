
char	buf1[];
char	buf2[];


int	main(void)
{
	char	buf3[128];

	while (1) {
		printf("%p, %p \n");
		
		if (!fgets(buf3, 128, stdin))
			break;
		
