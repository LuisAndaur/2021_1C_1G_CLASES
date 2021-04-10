#include <stdio.h>
#include <stdlib.h>
#define TAM 5

float calcularPromedio(int num1, int num2);

void mostrarPromedios(int n1[], int n2[], float prom[], int tam);

void ordenarAlumnos(int n1[], int n2[], float prom[], int tam);

int main()
{
    int notas1[TAM]= {5,4,10,2,4};
    int notas2[TAM]= {10,9,10,4,6};;
    float promedios[TAM];

    for(int i=0;i<TAM;i++)
    {
        // printf("Ingrese nota1: ");
        // scanf("%d", &notas1[i]);

        // printf("Ingrese nota2: ");
        // scanf("%d", &notas2[i]);

        promedios[i] = calcularPromedio(notas1[i], notas2[i]);
    }

    mostrarPromedios(notas1,notas2, promedios, TAM);

    ordenarAlumnos(notas1, notas2, promedios, TAM);

    mostrarPromedios(notas1,notas2, promedios, TAM);

    return 0;
}

float calcularPromedio(int num1, int num2)
{
    return (float) (num1 + num2)/2;
}

void mostrarPromedios(int n1[], int n2[], float prom[], int tam)
{
    //system("cls");
    printf("*** Listado Promedios Alumnos ***\n");
    printf("  Nota 1 parcial  Nota 2parcial  Promedio\n");
    for(int i=0;i<tam;i++)
    {
        printf("  %2d               %2d             %5.2f\n", n1[i] , n2[i], prom[i]);
    }

    printf("\n\n");
}

void ordenarAlumnos(int n1[], int n2[], float prom[], int tam)
{
    int auxInt;
    float auxFloat;

    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(prom[i]<prom[j])
            {
                auxFloat = prom[i];
                prom[i] = prom[j];
                prom[j] = auxFloat;

                auxInt = n1[i];
                n1[i] = n1[j];
                n1[j] = auxInt;

                auxInt = n2[i];
                n2[i] = n2[j];
                n2[j] = auxInt;
            }
        }
    }
}


