#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void mostrarPromedios(int n1[], int n2[], float prom[], int tam);

int main()
{
    int notas1[TAM];
    int notas2[TAM];
    float promedios[TAM];

    int notasSuma[TAM];

    for(int i=0;i<TAM;i++)
    {
        printf("Ingrese nota1: ");
        scanf("%d", &notas1[i]);

        printf("Ingrese nota1: ");
        scanf("%d", &notas2[i]);

        notasSuma[i] = notas1[i] + notas2[i];
    }

    for(int i=0;i<TAM;i++)
    {
        promedios[i] = (float)notasSuma[i]/2;

        printf("\nEl promedio es: %.2f\n", promedios[i]);


    }

    mostrarPromedios(notas1.notas2, promedios, TAM);

    return 0;
}


void mostrarPromedios(int n1[], int n2[], float prom[], int tam)
{
    system("cls");
    printf("*** Listado Promedios Alumnos ***\n");
    printf("    Nota 1 parcial  Nota 2parcial  Promedio\n");
    for(int i=0;i<tam;i++)
    {
        printf("        %2d         %2d         %.2f", n1[i] , n2[i], prom[i])
    }

    printf("\n\n");
}
