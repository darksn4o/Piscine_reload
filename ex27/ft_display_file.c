#include <unistd.h>
#include <fcntl.h>

//criação do buffer para ser utilizado futuramente
//com um número fixo
#define BUF_SIZE 4096

// Usado para ajudar /função auxiliar
void ft_putstr(char *str) 
{
    while(*str)
        write(2, str++, 1);
}

int main(int argc, char **argv)
{
    int ret;
    int op;
    char buffer[BUF_SIZE + 1];
    ret = 0;

    //Verificações do número  de arguentos
    if (argc < 2)
    {
        ft_putstr("File name missing.\n");
        return(1);
    }
    //Verificações em termos de arguentos
    if (argc > 2)
    {
        ft_putstr("Too many arguments.\n");
        return(1);
    }
    //open é necessario para ler o ficheiro pretendido
    op = open(argv[1], O_RDONLY);
    if (op < 0)
    {
        ft_putstr("Cannot read file.\n");//caso não seja possivel seja menor que 0
        return(1);
    }
    //vai tentar ler até a quantidade de bytes em op
    //caso não tenha mais ele apenas sai logo terminando a string/array 
    while ( (ret = read(op, buffer, BUF_SIZE)) > 0 )
    {
        write(1, buffer, ret);
    }
    //isto é para fechar 
    close(op);
    return(0);
}
