#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 5

int main()
{
    /*char nombres[5][20];//primero son filas la segunda columnas
    nombres[0][0] = 'a';
    printf("%c\n", nombres[0][0]);*/

    //int mat[FILAS][COLUMNAS] = {8,9,3,2,1,4,7,10,15,4,1,2,6,7,11};
    //int mat[][COLUMNAS] = {8,9,3,2,1,4,7,10,15,4,1,2,6,7,11};
    int mat[FILAS][COLUMNAS];// = {8,9,3,2,1,4,7,10,15,4,1,2,6,7,11};

    //carga filas y columnas
    for(int f=0;f<FILAS;f++)
    {
        for(int c=0;c<COLUMNAS;c++)
        {

            printf("Ingrese un numero: ");//CARGA DE DATOS
            scanf("%d", &mat[f][c]);
            //printf("%d ", mat[f][c]); IMPRIMIR
        }
        printf("\n");
    }

    //carga columnas y filas
    /*for(int c=0;c<COLUMNAS;c++)
    {
        for(int f=0;f<FILAS;f++)
        {
            printf("Ingrese un numero: ");//CARGA DE DATOS
            scanf("%d", &mat[f][c]);
            //printf("%d ", mat[f][c]); IMPRIMIR
        }
        printf("\n");
    }*/



    //printf("%d\n", nombres[0][0]);

    return 0;
}
