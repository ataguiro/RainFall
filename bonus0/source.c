#include <string.h>
#include <stdio.h>
#include <unistd.h>

char *p(char *src, const char *s)
{
	char buf[4096];
	char *ptr;

	puts(s);
	read(0, buf, 4096);
	*strchr(buf, '\n') = 0;
	ptr = strncpy(src, buf, 20);
	return (ptr);
}

char *pp(char *str)
{
	char s1[21];
	char s2[21];
	char *ret;

	p(s1, " - ");
	p(s2, " - ");
	strcpy(str, s1);
	str[strlen(str)] = ' ';
	ret = strcat(s1, s2);
	return (ret);
}

int main(void)
{
	char buff[4096];
	pp(buff);
	puts(buff);
}
