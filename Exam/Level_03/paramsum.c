#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_putnbr(int a)
{
	if(a < 10)
		ft_putchar(a + 48);
	else
	{
		ft_putnbr(a / 10);
		ft_putnbr(a % 10);
	}
}

int main(int argc, char **argv)
{
	ft_putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}