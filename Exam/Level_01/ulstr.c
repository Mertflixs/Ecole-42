#include <unistd.h>

void	yaz(char *s1)
{
	int i;

	i = 0;
	while(s1[i])
	{
		if(s1[i] >= 'a' && s1[i] <= 'z')
			s1[i] -= 32;
		else if(s1[i] >= 'A' && s1[i] <= 'Z')
			s1[i] += 32;
		write(1, &s1[i++], 1);
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		yaz(argv[1]);
	write(1, "\n", 1);
	return (0);
}