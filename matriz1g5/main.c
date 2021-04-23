#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILAS 5
#define COLUMNAS 20

void mostrarNombres(char names[][20], int tam);
void ordenarNombres(char names[][20], int tam);

int main()
{
    char nombres[FILAS][COLUMNAS] = {{"German"},{"Damo"},{"Amalia"},{"Donato"},{"Chepi"}};
    char auxCad[100];

    /*for(int i=0;i<FILAS;i++)
    {
        printf("Ingrese un nombre: ");
        fflush(stdin);
        gets(auxCad);
    }
    while( strlen(auxCad)>= COLUMNAS)
    {
        printf("Nombre demasiado largo. Rngrese su nombre/s: ");
        fflush(stdin);
        gets(auxCad);
    }
    strcpy(nombres, auxCad);*/

    mostrarNombres(nombres, FILAS);

    ordenarNombres(nombres, FILAS);

    mostrarNombres(nombres, FILAS);



    return 0;
}

void mostrarNombres(char names[][20], int tam)
{
    for(int i=0;i<tam;i++)
    {
        printf("%s\n", names[i]);
    }

    printf("\n\n");
}

void ordenarNombres(char names[][20], int tam)
{
    char auxCad[20];

    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(strcmp(names[i],names[j])>0)
            {
                strcpy(auxCad, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], auxCad);
            }
        }
    }
}




