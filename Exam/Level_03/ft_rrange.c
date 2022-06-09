#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int *arr;
	int i;
	int max;
	int temp = start;

	arr = malloc(100);
	i = 0;
	max = end;

	if(start > end)
	{
		start = end;
		end = temp;
	}
	while(end >= start)
	{
		arr[i] = end;
		end--;
	}
	return (arr);
}

int main(void)
{
	int *arr;
	arr = ft_rrange(5, 12);
	free(arr);
}