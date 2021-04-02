#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroIngresado;
    int contadorPares;
    int contadorImpares;
    int minimoNumero;
    int sumaPositivos;
    int productoNegativos;
    int ingresoNegativo;
    int i;

    contadorImpares = 0;
    contadorPares = 0;
    sumaPositivos = 0;
    productoNegativos = 1;
    ingresoNegativo = 0;

    for(i=0;i<10;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &numeroIngresado);
        while(numeroIngresado==0)
        {
            printf("ERROR: Reingrese un numero: ");
            scanf("%d", &numeroIngresado);
        }

        // a)
        if(numeroIngresado%2 == 0)
        {
            contadorPares++;
        }
        else
        {
            contadorImpares++;
        }

        //b) El menor numero ingresado
        if(i==0 || numeroIngresado<minimoNumero)
        {
            minimoNumero = numeroIngresado;
        }

        //c)suma positivos
        if(numeroIngresado>0)
        {
            sumaPositivos += numeroIngresado;
            //sumaPositivos = sumaPositivos + numerIngresado;
        }
        else
        {
            productoNegativos *= numeroIngresado;
            ingresoNegativo = 1;
        }

    }

    printf("a- Cantidad de pares: %d\nCantidad impares: %d \n", contadorPares, contadorImpares);
    printf("b- El numero minimo es: %d \n", minimoNumero);
    printf("c- La suma de los positivos es: %d \n", sumaPositivos);

    if(ingresoNegativo!=0)
    {
        printf("d- El producto de negativos es: %d \n", productoNegativos);
    }
    else
    {
        printf("d- No se ha ingresado ningun numero negativo para calcular el producto \n", productoNegativos);
    }

    return 0;
}
