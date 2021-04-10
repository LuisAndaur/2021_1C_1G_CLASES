#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarVectorCaracteres(char vec[], int tam);
int ordenarCaracteres(char vec[], int tam, int criterio);

int main()
{
    char caracteres[TAM]={'a','w','z','t','m'};

    mostrarVectorCaracteres(caracteres, TAM);

    if(!ordenarCaracteres(caracteres,TAM,0))
    {
        printf("Hubo problemas para ordenar.");
    }

    mostrarVectorCaracteres(caracteres, TAM);

    return 0;
}

void mostrarVectorCaracteres(char vec[], int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("%c ", vec[i]);
    }
    printf("\n\n");
}

int ordenarCaracteres(char vec[], int tam, int criterio)
{
    char aux;
    int todoOk = 0;
    if(vec!=NULL && tam>0)
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
