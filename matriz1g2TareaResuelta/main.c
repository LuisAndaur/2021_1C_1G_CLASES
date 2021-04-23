#include <stdio.h>
#include <stdlib.h>
#define FILAS 4
#define COLUMNAS 13

void mostrarMatriz(int m[][13], int filas);
void totalizar(int m[][13], int filas);

int main()
{
    int mat[FILAS][COLUMNAS] = {0};
    char seguir = 's';
    int linea;
    int interno;
    int recaudacion;
    mostrarMatriz(mat, FILAS);

    do{
        printf("Ingrese linea: ");
        scanf("%d", &linea);
        printf("Ingrese interno: ");
        scanf("%d", &interno);
        printf("Ingrese recaudacion: ");
        scanf("%d", &recaudacion);

        mat[linea-1][interno-1] += recaudacion;


        printf("Quiere ingresar otra recaudacion?: ");
        fflush(stdin);
        scanf("%c", &seguir);
    }while(seguir =='s');

    return 0;
}

void mostrarMatriz(int m[][13], int filas)
{
    totalizar(m, filas);
    printf("***Recaudaciones***");
    printf("        Internos\n");
    printf("          1  2  3  4  5  6  7  8  9  10  11  12   Total Linea\n");
    for(int f=0;f<filas;f++)
    {
        if(f==3)
        {
            printf("Total int ", f);
        }
        else
        {
            printf("Linea %d   ", f+1);
        }

        for(int c=0;c<13;c++)
        {
            printf("%d  ", m[f][c]);
        }
         printf("\n");
    }
}

void totalizar(int m[][13], int filas)
{
    for(int i=0;i<filas-1;i++)
    {
        for(int j=0;j<13-1;j++)
        {
            m[i][12] += m[i][j];
        }
    }

    for(int j=0;j<13;j++)
    {
        for(int i=0;i<filas-1;i++)
        {
            m[3][j] += m[i][j];
        }
    }
}
