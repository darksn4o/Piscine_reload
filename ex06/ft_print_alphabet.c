
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_print_alphabet(void)
{
	char letra;
	letra = 97;

	while (letra <= 122)
	{
		ft_putchar(letra);
		letra++;
	}
}