
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


char *ft_strdup(char *src)
{
	int tam;
	int i;
	tam = 0;
	while(src[tam] != '\0')
		tam++;
	
	char *cop = (char *)malloc(sizeof(char) * (tam + 1));
	
	if (cop == NULL)
		return NULL;

	i = 0;
	while(src[i] != '\0')
	{
		cop[i] = src[i]; 
		i++;
	}
	cop[i] = '\0';
	return(cop);
}


//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆
/* 
int main()
{
    char original[] = "Olá, mundo!";
    char *copia = ft_strdup(original);

    if (copia == NULL)
    {
        printf("Falha na alocação de memória.\n");
        return 1;
    }

    printf("Original: %s\n", original);
    printf("Cópia: %s\n", copia);

    free(copia);
    return 0;
}
*/