#include <unistd.h>

void	yaz(char *s)
{
	int i;

	i = 0;
	while(s[i])
		write(1, &s[i++], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		yaz(argv[1]);
	write(1, "\n", 1);
	return (0);
}