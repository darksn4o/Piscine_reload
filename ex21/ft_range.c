
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
	int *arr;
	int len;
	int i;

	if(min >= max)
		return NULL;
	
	len = max - min;
	arr = (int *)malloc(sizeof(int) * len);
	if (!arr)
		return NULL;
	
	i = 0;
	while(i < len)
	{
		arr[i] = min + i;
		i++;
	}
	return arr;
}


//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆
