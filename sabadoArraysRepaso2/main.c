#include <stdio.h>
#include <stdlib.h>
#define T 10

/******************************************************************************

Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a. Cantidad de positivos y negativos.
b. Sumatoria de los pares.
c. El mayor de los impares.
d. Listado de los números ingresados.
e. Listado de los números pares.
f. Listado de los números de las posiciones impares.

ESQUELETO EJERCICIO 3-1 HECHO POR GERMAN
*******************************************************************************/
/*1: si es par -1: si es impar o 0 si es neutro*/
int BuscarParidad(int);
/*1: si es positivo -1: si es negativo o 0 si es neutro*/
int EsPositivo(int);
/*Pedir el ingreso de 10 números*/
void IngresarArrayNumeros(int[], int, int min, int max);

/*a. Cantidad de positivos y negativos.*/
int ContarPositivos(int[], int);//EsPositivo
int ContarNegativos(int[], int);//EsPositivo

/*b. Sumatoria de los pares.*/
int SumarPares(int[], int);//BuscarParidad

/*c. El mayor de los impares.*/
int RetornarMayorImpar(int[], int);//BuscarParidad

/*d. Listado de los números ingresados.*/
void MostrarTodosLosNumeros(int[], int);

/*e. Listado de los números pares.*/
void MostrarTodosLosNumerosPares(int[], int);//BuscarParidad

/*f. Listado de los números de las posiciones impares.*/
void MostrarNumerosPosicionesImpares(int[], int);//BuscarParidad


int main()
{
    int numeros[T];
    int contadorPositivos;
    int contadorNegativos;
    IngresarArrayNumeros(numeros, T);

    contadorPositivos = ContarPositivos(numeros, T);
    contadorNegativos = contadorNegativos(numeros, T);



    return 0;
}

int ContarPositivos(int numeros[], int tam)//EsPositivo
{
    int i;
    int contadorPositivos;

    contadorPositivos =0;

    for(i=0; i<tam; i++)
    {
        if(EsPositivo(numeros[i])==1)
        {
            contadorPositivos++;
        }
    }
    return contadorPositivos;
}
