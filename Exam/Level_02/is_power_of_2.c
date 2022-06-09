#include <unistd.h>
#include <stdio.h>

int	iki(int i)
{
	int toplam;

	toplam = 0;
	while(toplam <= i)
	{
		if(toplam == i)
			return (1);
		toplam += 2;
	}
	return (0);
}
int main(int argc, char **argv)
{
	printf("%d",iki(11));
}