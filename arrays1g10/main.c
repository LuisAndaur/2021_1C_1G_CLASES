#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10
#define COLUMNAS 20

float calcularPromedio(int num1, int num2);

void mostrarAlumnos(int leg[], char names[][20], char sex[], int n1[], int n2[], float prom[], int tam);

void ordenarAlumnos(int leg[], char names[][20], char sex[], int n1[], int n2[], float prom[], int tam, int criterio, int asc);

int main()
{
    char nombres[TAM][COLUMNAS] = {{"Juan"},{"Pablo"},{"German"},{"Angel"},{"Dora"},{"Jana"},{"Esteban"},{"Romina"},{"Carlos"},{"Alicia"}};
    int legajos[TAM] = {6154,1584,3610,9582,2184,5154,3784,8510,7282,4484};
    char sexos[TAM] = {'m','m','m','m','f','f','m','f','m','f'};
    int notas1[TAM] = {5,4,10,2,8,1,3,7,5,4};
    int notas2[TAM] = {10,9,10,3,6,8,9,2,4,6};
    float promedios[TAM];

    for(int i=0;i<TAM;i++)
    {
        /*printf("Ingrese legajo: ");
        scanf("%d", &legajos[i]);

        printf("Ingrese sexo: ");
        fflush(stdin);
        scanf("%c", &sexos[i]);

        printf("Ingrese nota1: ");
        scanf("%d", &notas1[i]);

        printf("Ingrese nota2: ");
        scanf("%d", &notas2[i]);*/

        promedios[i] = calcularPromedio(notas1[i], notas2[i]);
    }

    mostrarAlumnos(legajos, nombres, sexos, notas1,notas2, promedios, TAM);

    ordenarAlumnos(legajos, nombres, sexos, notas1, notas2, promedios, TAM, 1, 0);

    mostrarAlumnos(legajos, nombres, sexos, notas1,notas2, promedios, TAM);

    return 0;
}

float calcularPromedio(int num1, int num2)
{
    return (float) (num1 + num2)/2;
}

void mostrarAlumnos(int leg[], char names[][20], char sex[], int n1[], int n2[], float prom[], int tam)
{
    //system("cls");
    printf("*** Lista de Alumnos ***\n");
    printf("  Legajo    Nombre   Sexo    Nota 1 parcial  Nota 2parcial  Promedio\n");
    for(int i=0;i<tam;i++)
    {
        printf("  %6d    %7s   %c          %2d               %2d             %5.2f\n", leg[i], names[i], sex[i], n1[i] , n2[i], prom[i]);
    }

    printf("\n\n");
}

void ordenarAlumnos(int leg[], char names[][20], char sex[], int n1[], int n2[], float prom[], int tam, int criterio, int asc)
{
    //asc  1 ascendente  0 descendente
    //criterio  0 legajo 1 nombre 2 sexo 3 promedio
    int auxInt;
    char auxChar;
    float auxFloat;
    char auxCad[20];

    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(asc)
            {
                if( (criterio==0 && leg[i]>leg[j]) || (criterio==1 && strcmp(names[i],names[j])>0) || (criterio==2 && sex[i]>sex[j]) || (criterio==3 && prom[i]>prom[j]) )
                {
                    auxFloat = prom[i];
                    prom[i] = prom[j];
                    prom[j] = auxFloat;

                    auxInt = leg[i];
                    leg[i] = leg[j];
                    leg[j] = auxInt;

                    auxChar = sex[i];
                    sex[i] = sex[j];
                    sex[j] = auxChar;

                    auxInt = n1[i];
                    n1[i] = n1[j];
                    n1[j] = auxInt;

                    auxInt = n2[i];
                    n2[i] = n2[j];
                    n2[j] = auxInt;

                    strcpy(auxCad, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], auxCad);
                }
            }
            else
            {
                if( (criterio==0 && leg[i]<leg[j]) || (criterio==1 && strcmp(names[i],names[j])<0) || (criterio==2 && sex[i]<sex[j]) || (criterio==3 && prom[i]<prom[j]) )
                {
                    auxFloat = prom[i];
                    prom[i] = prom[j];
                    prom[j] = auxFloat;

                    auxInt = leg[i];
                    leg[i] = leg[j];
                    leg[j] = auxInt;

                    auxChar = sex[i];
                    sex[i] = sex[j];
                    sex[j] = auxChar;

                    auxInt = n1[i];
                    n1[i] = n1[j];
                    n1[j] = auxInt;

                    auxInt = n2[i];
                    n2[i] = n2[j];
                    n2[j] = auxInt;

                    strcpy(auxCad, names[i]);
                    strcpy(names[i], names[j]);
                    strcpy(names[j], auxCad);
                }
            }

        }
    }
}


