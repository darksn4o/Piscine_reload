
#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

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

void str_copy(char **arr, int size)
{
    int i;
    int j;
    char *temp;

    i = 0; 
    while (i < size - 1)
    {
        j = i + 1;
        while(j < size)
        {
            if (ft_strcmp(arr[i],arr[j]) > 0)
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    str_copy(argv + 1 , argc - 1);

    while (i < argc)
    {
        j = 0;
        while(argv[i][j])
        {
            ft_putchar(argv[i][j]);
            j++;
        }
        ft_putchar('\n');
        i++;
    }
}