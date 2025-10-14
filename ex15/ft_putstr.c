
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

void ft_putstr(char *str)
{
    int i;
    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    ft_putchar(str);
}

//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆
/*
int main(void)
{
    ft_putstr("Ola Mundo!");
    ft_putchar('\n');  // para quebrar a linha no final
    return (0);
}
*/
