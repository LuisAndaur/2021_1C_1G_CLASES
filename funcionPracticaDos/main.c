#include <stdio.h>
#include <stdlib.h>

void duplicar(int num);

int main()
{
    int num = 20;

    printf("Antes de duplicar num vale %d\n", num);

    duplicar(num);//pasar variable por valor

    printf("Despues de duplicar num vale %d\n", num);

    return 0;
}

void duplicar(int num)
{
    num = num * 2;

    printf("En duplicar num vale %d\n", num);
}































/*int esPar(int numero);

int main()
{
    if(esPar(2))
    {
        printf("Es par\n");
    }
    else
    {
        printf("Es impar\n");
    }
    return 0;
}

int esPar(int numero)
{
    int rta;

    if(numero%2==0)
    {
        rta = 1;
    }
    else
    {
        rta = 0;
    }

    return rta;
}

*/













/*
char miTolower(char letra);

int main()
{
    printf("%c\n", miTolower('4'));
    return 0;
}


char miTolower(char letra)
{
    if(letra >= 'A' || letra <= 'Z')
    {
        letra = letra + 32;
    }

    return letra;
}
*/
