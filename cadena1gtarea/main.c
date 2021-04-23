#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadena.h"
#define SIZE_NAME 20
#define SIZE_LNAME 20
#define SECURE_SIZE 100

/*Enunciado:
1- Pedir al usuario el nombre
2- Pedir al usuario el apellido
3- En nombre completo el formato debe ser: Andaur, Luis Alejandro*/

int main()
{
    char nombre[SIZE_NAME];// no se toca, queda como se cargo
    char apellido[SIZE_LNAME]; // no se toca, queda como se cargo
    char nombreCompleto[SIZE_NAME + SIZE_LNAME + 1];//aca hago todas las modificaciones
    char auxCad[SECURE_SIZE];

    //VALIDACION
    printf("Ingrese su nombre/s: ");
    fflush(stdin);
    gets(auxCad);
    while( strlen(auxCad)>= SIZE_NAME)
    {
        printf("Nombre demasiado largo. Rngrese su nombre/s: ");
        fflush(stdin);
        gets(auxCad);
    }
    strcpy(nombre, auxCad);








    //ingresoNombre(nombre);
    ingresoApellido(apellido);
    concatenarNombreYApaellido(nombre, apellido, nombreCompleto);
    aplicarFormato(nombreCompleto);

    printf("\nUsted ingreso:");
    printf("\nNombre/s: %s \nApellido/s: %s\n\n", nombre, apellido);

    printf("Nombre y Apellido: ");
    printf("%s\n", nombreCompleto);

    printf("\n\n", nombreCompleto);

    return 0;
}


void ordenarNombres(char m[][20], int tam)
{
    char auxChar;

    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j<tam;j++)
        {
            if(m[i]<m[j])
            {
                auxChar = m[i];
                m[i] = m[j];
                m[j] = auxChar;
            }
        }
    }
}

