#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ingresoNombre(char vec[])
{
    printf("Ingrese su nombre/s: ");
    fflush(stdin);
    gets(vec);
    //puts(vec);
}

void ingresoApellido(char vec[])
{
    printf("Ingrese su apellido/s: ");
    fflush(stdin);
    gets(vec);
    //puts(vec);
}

void concatenarNombreYApaellido(char name[], char surname[], char nameSurname[])
{
    strcpy(nameSurname, surname);
    strcat(nameSurname, ", ");
    strcat(nameSurname, name);
}

void aplicarFormato(char nameSurname[])
{
    strlwr(nameSurname);
    nameSurname[0] = nameSurname[0] - 32;
    for(int i=0;nameSurname[i]!='\0';i++)
    {
        //int j = i+1;
        if(nameSurname[i]==' ')
        {
            //nameSurname[j] = nameSurname[j] - 32;
            nameSurname[i+1] = nameSurname[i+1] - 32;
        }
    }
}
