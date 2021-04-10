#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int numeros[TAM];

    for(int i=0;i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }

    for(int i=TAM-1;i>=0;i--)
    {
        printf("%d ", numeros[i]);
    }

    printf("\n\n");



    return 0;
}
