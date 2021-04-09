#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define TAM 5

void mostrarCaracteres(char vec[],int tam);
void pasarMayusculas(char vec[], int tam);

int main()
{
    char caracteres[TAM]={'c','g','t','r','v'};

    mostrarCaracteres(caracteres, TAM);
    pasarMayusculas(caracteres, TAM);
    mostrarCaracteres(caracteres, TAM);

    return 0;
}



void mostrarCaracteres(char vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        printf("%c ", vec[i]);
        //fflush(stdin);
    }
    printf("\n\n");
}


void pasarMayusculas(char vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
        //vec[i] = vec[i] - 32;
        vec[i] = toupper(vec[i]);
    }
    printf("\n\n");
}
