
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_is_negative(int n)
{
	char pos;
	char neg;
	pos = 'P';
	neg = 'N';
	if (n >= 0)
		ft_putchar(pos);
	else
		ft_putchar(neg);
}