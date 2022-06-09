#include <unistd.h>

void	yaz(char *s1)
{
	int i;

	i = 0;
	while(s1[i])
		i++;
	i--;
	while(i >= 0)
		write(1, &s1[i--], 1);
}

int main(int argc, char **argv)
{
	if(argc == 2)
		yaz(argv[1]);
	write(1, "\n", 1);
	return (0);
}