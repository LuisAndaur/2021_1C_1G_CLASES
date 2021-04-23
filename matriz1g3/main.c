#include <stdio.h>
#include <stdlib.h>
#define FILAS 3
#define COLUMNAS 5

void mostrarMatriz(int m[][5], int filas);

int main()
{
    int mat[FILAS][COLUMNAS] = {8,9,3,2,1,4,7,10,15,4,1,2,6,7,11};

    mostrarMatriz(m[][5], FILAS);

    return 0;
}


void mostrarMatriz(int m[][5], int filas)
{
    for(int f=0;f<filas;f++)
    {
        for(int c=0;c<5;c++)
        {
            printf("%d ", m[f][c]);
        }
        printf("\n");
    }
}
