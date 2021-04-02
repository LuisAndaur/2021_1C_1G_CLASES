/*
Ingresar 5 números.
Determinar cuál es el máximo y el mínimo
e indicar en qué orden fue ingresado.

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngresado;
    int numeroMaximo;
    int numeroMinimo;
    int ordenMaximo;
    int ordenMinimo;
    int i;

    for(i=0;i<5;i++)
    {
        printf("Ingrese numero: ");
        scanf("%d", &numeroIngresado);


        if(i==0 || numeroIngresado>numeroMaximo)
        {
            numeroMaximo = numeroIngresado;
            ordenMaximo = i+1;
        }

        if(i==0 || numeroIngresado<numeroMinimo)
        {
            numeroMinimo = numeroIngresado;
            ordenMinimo = i+1;
        }
    }


    printf("El numero maximo es: %d \nEl numero minimo es: %d \n", numeroMaximo, numeroMinimo);
    printf("El orden del numero maximo es: %d \nEl orden del numero minimo es: %d", ordenMaximo, ordenMinimo);
    return 0;
}
