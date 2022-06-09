#include <unistd.h>
#include <stdio.h>

void	yaz(char *s1)
{
	int i;

	i = 0;
	while(s1[i] <= 32)
		i++;
	while(s1[i])
	{
		if(s1[i] == ' ' || s1[i] == '\t')
		{
			if(s1[i + 1] > 32)
				write(1, " ", 1);
		}
		else
			write(1, &s1[i], 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		yaz(argv[1]);
	write(1, "\n", 1);
	return (0);
}
