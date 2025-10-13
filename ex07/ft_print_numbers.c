
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_numbers(void)
{
	char numb;
	numb = 48;
	while (numb <= 57)
	{
		ft_putchar(numb);
		numb++;
	}
}
