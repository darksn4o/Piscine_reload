int ft_strcmp(char *s1, char *s2)
{
    int i;
    i = 0;
    while (s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }
    return(s1[i] - s2[i]);
}

//🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆🦆

/*
int main(void)
{
    char *texto1 = "Ola";
    char *texto2 = "Ola";
    char *texto3 = "Olaa";
    char *texto4 = "OlaMundo";

    printf("Comparar '%s' com '%s' -> %d\n", texto1, texto2, ft_strcmp(texto1, texto2));
    printf("Comparar '%s' com '%s' -> %d\n", texto1, texto3, ft_strcmp(texto1, texto3));
    printf("Comparar '%s' com '%s' -> %d\n", texto3, texto1, ft_strcmp(texto3, texto1));
    printf("Comparar '%s' com '%s' -> %d\n", texto1, texto4, ft_strcmp(texto1, texto4));

    return (0);
}
*/