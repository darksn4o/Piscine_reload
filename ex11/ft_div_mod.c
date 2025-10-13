
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b; 
}
/*
int main()
{
	int a;
	int b;
	int c;
	int d;

	a = 3;
	b = 2;

	ft_div_mod(a,b,c,d);
	printf("este e o valor de A:%d este e o valor de B %d", a,b);
	printf("este e a divisao de A por B: %d , e este e o resto da divisao: %d", c,d)
} 
*/
