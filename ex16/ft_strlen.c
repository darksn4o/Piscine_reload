
int ft_strlen(char *str)
{
    int i; 
    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return(i);
}

//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆
/*
int main(void)
{
    char *texto = "Ola Mundo!";
    int comprimento;
    
    comprimento = ft_strlen(texto);
    
    printf("Tamanho: %d\n", comprimento);
    
    return (0);
}
*/
