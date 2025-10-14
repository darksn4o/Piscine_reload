
#include <unistd.h>

int ft_iterative_factorial(int nb)
{
    int i; 
    int temp;
    
    i = 1;
    temp = 1;

    if(nb < 0)
        return(0);
    while (i <= nb)
    {
        temp = temp * i;
        i++;
    }
    return(temp);
}

//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆

/*
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
 */