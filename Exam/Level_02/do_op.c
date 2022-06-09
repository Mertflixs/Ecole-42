#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	yaz(int a, char *s2, int b)
{
	if(s2[0] == '+')
		printf("%d", a + b);
	if(s2[0] == '-')
		printf("%d", a - b);
	if(s2[0] == '/')
		printf("%d", a / b);
	if(s2[0] == '*')
		printf("%d", a * b);
}

int main(int argc, char **argv)
{
	if(argc == 4)
		yaz(atoi(argv[1]), argv[2], atoi(argv[3]));
	return (0);
}