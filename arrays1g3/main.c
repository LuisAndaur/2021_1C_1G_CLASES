#include <stdio.h>
#include <stdlib.h>
#define TAM 5

float calcularPromedio(int vec[], int tam);

int main()
{
    int numeros[TAM]= {4,3,2,7,8};

    printf("\n\nEl promedio es: %.2f\n", calcularPromedio(numeros, TAM));


    return 0;
}


float calcularPromedio(int vec[], int tam)
{
    int acumuladorVec = 0;
    float promedio;

    for(int i=0; i<tam; i++)
    {
        printf("%d ", vec[i]);
        acumuladorVec = acumuladorVec + vec[i];
    }

    promedio = (float)acumuladorVec/tam;

    return promedio;
}
