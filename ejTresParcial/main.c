#include <stdio.h>
#include <stdlib.h>
/*
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con
un grupo de personas, de cada persona debemos obtener los siguientes datos:
Nombre,
estado civil ("soltero", "casado" o "viudo"),
edad( solo mayores de edad, mas de 17),
temperatura corporal(validar por favor 34 y 41) y
sexo (validar).
nos cobra $600  por pasajero.
a) La cantidad de viudos de mas de 60 años
b) el nombre de la mujer soltera mas joven
c) cuanto sale el viaje total sin descuento
y si hay mas del 50% del pasaje que tiene mas de 60 años,
el precio final  tiene  un descuento del 25%, que solo mostramos si corresponde.
*/

int main()
{
    const float PRECIO = 600;
    char nombre;
    char estado;
    int edad;
    float temperatura;
    char sexo;
    char seguir;
    char nombreJoven;
    int edadJoven;
    int flagPrimero = 0;

    seguir = 's';

    while(seguir=='s')
    {

        printf("Ingrese nombre: ");
        fflush(stdin);
        scanf("%c", &nombre);

        printf("Ingrese estado civil s, c, v: ");
        fflush(stdin);
        scanf("%c", &estado);
        while(estado!='s' && estado!='c' && estado!='v')
        {
            printf("ERROR: Reingrese estado civil s, c, v: ");
            fflush(stdin);
            scanf("%c", &estado);
        }

        printf("Ingrese edad: ");
        scanf("%d", &edad);
        while(edad<18)
        {
            printf("ERROR: Reingrese edad: ");
            scanf("%d", &edad);
        }

        printf("Ingrese temperatura 34-41: ");
        scanf("%f", &temperatura);
        while(temperatura<34 || temperatura>41)
        {
            printf("ERROR: Reingrese temperatura 34-41: ");
            scanf("%f", &temperatura);
        }

        printf("Ingrese sexo m-f: ");
        fflush(stdin);
        scanf("%c", &sexo);
        while(sexo!='m' && sexo!='f')
        {
            printf("ERROR: Reingrese sexo m-f: ");
            fflush(stdin);
            scanf("%c", &sexo);
        }

        printf("Nombre: %c Estado s-c-v: %c Edad +18: %d Temperatura 34-41: %f\n", nombre, estado, edad, temperatura, sexo);

        if(sexo=='f' && estado=='s') //if(sexo=='f' && estado=='s' || (flagPrimero==0 || edad<edadJoven))
        {
            if(flagPrimero==0 || edad<edadJoven)
            {
                edadJoven = edad;
                nombreJoven = nombre;
                flagPrimero = 1;
            }
        }

        printf("quiere ingresar otro pasajero?: ");
        fflush(stdin);
        scanf("%c", &seguir);
    }



    return 0;
}
