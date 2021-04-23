#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int miStrlen(char cadena[]);
void miStrupr(char cadena[]);

int main()
{
    //char cadena1[20] = {"Hola"};
    //char cadena2[20] = {"Mundo"};
    char nombre[20];
    char auxCad[100];//aux que almacene mucha cantidad
    //int edad = 20;
    // el largo del valor guardado en cadena1 sea menor que el tamaño del vector en cadena2
    //strcpy(cadena2, cadena1);//copia una cadena
    //printf("%d\n", strlen(cadena1));//devuelve el largo de la cadena
    //strlwr(cadena1);//pasa mayusculas a minusculas
    //strupr(cadena2);//pasa minusculas a mayuscula
    //strcmp(cadena1, cadena2);//comparar cadenas recibe dos cadenas
    //stricmp(cadena1, cadena2);//Incensible a las MAY y MIN Jose=jose comparar cadenas recibe dos cadenas
    //printf("%d\n", strcmp(cadena1, cadena2));
    //printf("Cadena1: %s\n", cadena1);
    //printf("Cadena2: %s\n", cadena2);
    //strcat(cadena1, " ");//concatena cadenas
    //strcat(cadena1, cadena2);//concatena cadenas
    //printf("%s \n", cadena1);
    //puts(cadena1);//muestra el contenido de la cadena, no puede formar frases
    printf("Ingrese nombre: ");
    //gets(nombre);//guarda toda la cadena que escribamos
    //fgets(nombre,20,stdin);//pone limite de tamaño para que no desborde
    gets(auxCad);
    while(strlen(auxCad)>19)
    {
        printf("Nombre muy largo reingrese nombre: ");
        fflush(stdin);
        gets(auxCad);
    }
    strcpy(nombre,auxCad);

    puts(nombre);



    return 0;
}


int miStrlen(char cadena[])
{
    int contador = 0;
    for(int i=0;cadena[i]!='\0';i++)
    {
        contador++;
    }

    return contador;
}

void miStrupr(char cadena[])
{
    for(int i=0;cadena[i]!='\0';i++)
    {
        if(cadena[i]>=97 && cadena[i]<=122)
        {
            cadena[i] = cadena[i] - 32;
        }
        //cadena[i] = toupper(cadena[i]); //necesita la lib ctype.h
    }
}
