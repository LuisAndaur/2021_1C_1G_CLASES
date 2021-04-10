#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main()
{
    int numeros[TAM]={2,5,7,10};
    numeros[4] = 0;

    for(int i=0;i<TAM-1;i++)
    {
        printf("%d \n", numeros[i]);

        numeros[4] = numeros[4] + numeros[i];
    }

    printf("La suma es: %d\n", numeros[4]);

    printf("\n\n");

    return 0;
}
