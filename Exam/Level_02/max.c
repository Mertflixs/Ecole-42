#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i;
	int max;

	max = 0;
	i = 0;
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main(void)
{
	int arr[] = {1,2,3,4,5,6};
	printf("%d",max(arr, 6));
}