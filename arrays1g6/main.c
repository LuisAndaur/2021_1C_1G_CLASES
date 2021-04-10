#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVectorEnteros(int vec[], int tam);

/** \brief Ordena un array de enteros
 *
 * \param vec[] int array a ordenar
 * \param tam int Tamaño del array
 * \param criterio int 1 para ordenar creciente/ 0 decreciente
 * \return int Retorna 1 si pudo ordenar / 0 si no pudo
 *
 */
int ordenarEnteros(int vec[], int tam, int criterio);

int main()
{
    int numeros[TAM]={5,9,2,4,8};

    mostrarVectorEnteros(numeros,TAM);

    if(!ordenarEnteros(numeros,TAM,1))
    {
        printf("Hubo problemas para ordenar.");
    }
    /*for(int i=0;i<TAM;i++)
    {
        for(int j=i+1;j<TAM;j++)
        {
            if(numeros[i]>numeros[j])
            {
                aux = numeros[i];
                numeros[i] = numeros[j];
                numeros[j] = aux;
            }
        }
    }*/

    mostrarVectorEnteros(numeros,TAM);

    ordenarEnteros(numeros,TAM,0);

    mostrarVectorEnteros(numeros,TAM);

    return 0;
}

void mostrarVectorEnteros(int vec[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("%d ", vec[i]);
    }
    printf("\n\n");
}

int ordenarEnteros(int vec[], int tam, int criterio)
{
    int aux;
    int todoOk = 0;
    if(vec!=NULL && tam>0 && criterio>=0 && criterio<=1 )
    {
        for(int i=0;i<tam;i++)
        {
            for(int j=i+1;j<tam;j++)
            {
                if( (criterio && vec[i]>vec[j]) || (!criterio && vec[i]<vec[j]))
                {
                    aux = vec[i];
                    vec[i] = vec[j];
                    vec[j] = aux;
                }
            }
        }
        todoOk = 1;
    }

    return todoOk;
}

