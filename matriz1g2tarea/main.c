#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILAS 3
#define COLUMNAS 12
/*
ENUNCIADO
linea 1, linea 2, linea 3 (colectivos)
12 internos en cada linea
Matriz de 3 filas(lineas) y 12 columnas(internos)
Hacer un programa que pida la linea y el interno.
Guardar lo que se va recaudando en una matriz acumulando
las ganancias hasta que el usuario quiera.
Cuando el usuario ya no quiere ingresar informacion
mostrar lo que se recaudo en formato de tabla agregando
una fila y una columna que muestren los totales por columna
y por fila. Indicar en el espacio sobrante(ultimo cuadradito) la recaudacion TOTAL*/

void mostrarMenu(int* fila, int* columna, int* recaudacion, int* flagLinea, int* flagColumna, int* flagRecaudacion);

int main()
{
    int recaudacion;
    int fila;
    int columna;
    int opcion;
    int ganancias[FILAS][COLUMNAS] = {0};
    int gananciasTotales[4][13] = {0};
    char continuar = 's';
    int flagLinea = 0;
    int flagColumna = 0;
    int flagRecaudacion = 0;

    while(continuar == 's')
    {
        mostrarMenu(&fila, &columna, &recaudacion, &flagLinea, &flagColumna, &flagRecaudacion);

        printf("Ingrese una opcion: ");
        scanf("%d", &opcion);
        switch(opcion)
        {
            case 1:
                printf("1- Ingrese linea de colectivo 1 a 3: ");
                scanf("%d", &fila);
                while(fila<1 || fila>3)
                {
                    printf("1- ERROR: Reingrese linea de colectivo 1 a 3: ");
                    scanf("%d", &fila);
                }
                flagLinea = 1;
                break;

            case 2:
                printf("2- Ingrese numero de interno 1 a 12: ");
                scanf("%d", &columna);
                while(columna<1 && columna>12)
                {
                    printf("2- ERROR: Reingrese numero de interno 1 a 12: ");
                    scanf("%d", &columna);
                }
                flagColumna = 1;
                break;

            case 3:
                printf("3- Ingrese la recaudacion: $ ");
                scanf("%d", &recaudacion);
                while(recaudacion<1)
                {
                    printf("3- ERROR: Reingrese la recaudacion: $ ");
                    scanf("%d", &recaudacion);
                }
                flagRecaudacion = 1;
                break;

            case 4:
                flagLinea = 0;
                flagColumna = 0;
                flagRecaudacion = 0;
                break;

            case 5:
                continuar = 'n';
                break;

            default:
                printf("Opcion incorrecta: ");
                break;
        }


        for(int i=0;i<FILAS;i++)
        {
            for(int j=0;j<COLUMNAS;j++)
            {
                if( (i==fila-1) && (j==columna-1) )
                {
                    ganancias[i][j] = ganancias[i][j] + recaudacion;
                }
            }
            printf("\n");
        }
    }


    printf("Cuadro de ganancias:\n");
    for(int i=0;i<4;i++)
        {
            for(int j=0;j<13;j++)
            {
                    //printf("%d ", gananciasTotales[i][j]);
                    printf("%d ", ganancias[i][j]);
            }
            printf("\n");
        }








    return 0;
}

void mostrarMenu(int* fila, int* columna, int* recaudacion, int* flagLinea, int* flagColumna, int* flagRecaudacion)
{
    system("cls");
    printf("\n========================\n  Sistema de ganancias  \n========================\n\n");
    if(*flagLinea)
    {
        printf("1- Ingrese linea de colectivo 1 a 3: %d\n", *fila);
    }
    else
    {
        printf("1- Ingrese linea de colectivo 1 a 3:\n");
    }

    if(*flagColumna)
    {
        printf("1- Ingrese numero de interno 1 a 12: %d\n", *columna);
    }
    else
    {
        printf("1- Ingrese numero de interno 1 a 12:\n");
    }

    if(*flagRecaudacion)
    {
        printf("3- Ingrese la recaudacion: $ %d\n", *recaudacion);
    }
    else
    {
        printf("3- Ingrese la recaudacion: $\n");
    }
    printf("4- Cargar otro \n\n");
    printf("5- Salir y mostrar resultados \n\n");

}
