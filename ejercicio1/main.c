/*
Ingresar números enteros, hasta que el usuario lo decida.
Calcular y mostrar:
a) El promedio de los números positivos.
b) El promedio de los números negativos.
*/
#include <stdio.h>
#include <stdlib.h>



int main()
{
    int numeroIngresado;
    char seguir;
    int contadorPositivos;
    int contadorNegativos;
    int acumuladorPositivos;
    int acumuladorNegativos;
    float promedioPositivos;
    float promedioNegativos;

    contadorPositivos = 0;
    contadorNegativos = 0;
    acumuladorPositivos = 0;
    acumuladorNegativos = 0;

    seguir = 's';

    do
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeroIngresado);
        while(numeroIngresado==0)
        {
            printf("ERROR: Reingrese un numero: ");
            scanf("%d", &numeroIngresado);
        }

        if(numeroIngresado>0)
        {
            contadorPositivos++;
            acumuladorPositivos += numeroIngresado;
        }
        else
        {
            contadorNegativos++;
            acumuladorNegativos += numeroIngresado;
        }

        printf("Desea seguir?");
        fflush(stdin);
        scanf("%c", &seguir);

    }while(seguir=='s');

     promedioPositivos = (float)acumuladorPositivos/contadorPositivos;
     promedioNegativos = (float)acumuladorNegativos/contadorNegativos;

     printf("El promedio de positivos es: %.2f\n", promedioPositivos);
     printf("El promedio de negativos es: %.2f\n", promedioNegativos);

    return 0;
}
