
#include <unistd.h>

int	ft_sqrt(int nb)
{
    int i;
    if (nb == 0)
        return(0);
    if (nb < 0)
        return(0);
    while (i * i < nb)
        i++;
    if (i * i == nb)
        return(1);
    else 
        return(0);
}

//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆
/*
int	main(void)
{
	printf("%d\n", ft_sqrt(25));
	return (0);
}
 */