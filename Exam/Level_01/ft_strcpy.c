#include <unistd.h>
#include <stdio.h>

void	ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
int main(void)
{
	char s1[] = "ahmet";
	char s2[] = "hakan";

	ft_strcpy(s1,s2);
	printf("%s", s1);
}