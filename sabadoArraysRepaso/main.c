#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 10

/*Ejercicio 3-1 (VECTORES Y FUNCIONES):
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a. Cantidad de positivos y negativos.
b. Sumatoria de los pares.
c. El mayor de los impares.
d. Listado de los números ingresados.
e. Listado de los números pares.
f. Listado de los números de las posiciones impares.  
Se deberán utilizar funciones y vectores.*/




int main()
{
    int numeros[TAM];
    int cantidadPosNeg;
    int pares;
    int mImpares;

	numeros[TAM] = pedirNumerosEnteros(numeros, TAM);

	if(!cantidadPositivosNegativos(numeros, TAM, &cantidadPosNeg))
	{
		printf("a- No hay positivos y negativos\n\n");
	}
	else
	{
		printf("a- La cantidad de positivos y negativos es: %d\n\n", cantidadPosNeg);
	}

	if(!sumarPares(numeros, TAM, &pares))
	{
		printf("b- No hay positivos y negativos\n\n");
	}
	else
	{
		printf("b- La cantidad de numeros pares es: %d\n\n", pares);
	}

	if(!mayorImpares(numeros, TAM, &mImpares))
	{
		printf("c- No hay numeros impares\n\n");
	}
	else
	{
		printf("c- El mayor de los impares es: %d\n\n", mImpares);
	}

	mostrarListados(numeros, TAM);

	listadoPares(numeros, TAM);

	listadoImpares(numeros, TAM);




	return 0;
}












/*
void ordenarNumeros(int vec[], int tam)
{
	int aux;

    for(int i=0;i<tam;i++)
    {
        for(int j=i+1;j>tam;j++)
        {
            if(vec[i]<vec[j])
            {
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }
	printf("\n\n");
}
*/

