#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	int i;
	char *arr;

	i = 0;
	while(src[i])
		i++;
	arr = malloc(sizeof(char) * i);
	i = 0;
	while(src[i])
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int main(void)
{
	char dizi[] = "ahmet1";
	printf("%s", ft_strdup(dizi));
}