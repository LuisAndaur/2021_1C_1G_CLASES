#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int mostrarVectorEnteros(int vec [], int tam);
void cargarVectorEnteros(int vec [], int tam);

int main()
{
    int numeros [TAM];
    //int numeros [TAM] = {0}; inicializas todas en cero
    //int numeros [TAM] = {4,3,2,7,1};//inicializacion por extension
    //int total;

    //cargo(escribo) secuencialmente el vector de enteros
    /*for(int i=0; i<TAM; i++)//0 1 2 3 4
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
    }*/

    cargarVectorEnteros(numeros, TAM);

    if(!mostrarVectorEnteros(numeros, TAM))
    {
        printf("Hubo un problema al mostrar el vector\n");
    }

    //muestro los valores del array o vector secuencialmente
    /*for(int i=0; i<TAM; i++)//0 1 2 3 4
    {
        printf("%d ", numeros[i]);
    }*/

    //("El total es: %d\n", numeros);
    /*
    printf("Ingrese un numero: ");
    scanf("%d", &numeros [2]); //notacion vectorial
    //scanf("%d", numeros + 2);//notacion puntero

    printf("%d\n", numeros[2]);//notacion vectorial
    //printf("%d\n", (*numeros + 2));//notacion puntero*/

    return 0;
}

void cargarVectorEnteros(int vec [], int tam)
{
    for(int i=0; i<tam; i++)//0 1 2 3 4
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vec[i]);
    }
}



int mostrarVectorEnteros(int vec [], int tam)
{
    int todoOk = 0;

    if(vec != NULL && tam>0)
    {
        for(int i=0; i<tam; i++)
        {
            printf("%d ", vec[i]);
        }
    todoOk = 1;
    }

    return todoOk;
}
