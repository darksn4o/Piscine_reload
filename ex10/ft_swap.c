
#include <stdio.h>

void ft_swap(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
/* 
int main()
{
	int x_OK;
	int y_OK;
	
	x_OK = 0;
	y_OK = 1;

	printf("o primerio %d", x_OK);
	printf("o primerio %d", y_OK);
	ft_swap(x_OK, y_OK);
	return(0);
}
 */