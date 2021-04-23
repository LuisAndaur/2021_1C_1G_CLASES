/*
 ============================================================================
 Name        : sabadoArrays.c
 Author      : Luis Andaur
 Version     :
 Copyright   : Your copyright notice
 Description :  Ejercicio 3-1 (VECTORES Y FUNCIONES):
				Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
				a. Cantidad de positivos y negativos.
				b. Sumatoria de los pares.
				c. El mayor de los impares.
				d. Listado de los números ingresados.
				e. Listado de los números pares.
				f. Listado de los números de las posiciones impares.  
				Se deberán utilizar funciones y vectores.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int pedirNumerosEnteros(int vec[], int tam);

//void mostrarNumeros(int vec[], int tam);

int cantidadPositivosNegativos(int vec[], int tam);

int main(void) {
	setbuf(stdout, NULL);

	int numeros[TAM];

	numeros[TAM] = pedirNumerosEnteros(numeros, TAM);

	//mostrarNumeros(numeros, TAM);

	if(!cantidadPositivosNegativos(numeros, TAM))
	{
		printf("a- No hay positivos y negativos\n");
	}
	else
	{
		printf("a- La cantidad de positivos y negativos es: %d\n", cantidadPositivosNegativos(numeros, TAM));
	}


	return EXIT_SUCCESS;
}

int pedirNumerosEnteros(int vec[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("Ingrese un numero desde -1000 a 1000: ");
		scanf("%d", &vec[i]);
		while(vec[i]<-1000 || vec[i]>1000)
		{
			printf("ERROR: Reingrese un numero desde -1000 a 1000: ");
			scanf("%d", &vec[i]);
		}
	}
	return vec[tam];
}

void mostrarNumeros(int vec[], int tam)
{
	for(int i=0;i<tam;i++)
	{
		printf("%d ", vec[i]);
	}
	printf("\n\n");
}

int cantidadPositivosNegativos(int vec[], int tam)
{
	int ret = 1;
	int contadorPositivoNegativos = 0;

	for(int i=0;i<tam;i++)
	{
		if(vec[i]>0 || vec[i]<0)
		{
			contadorPositivoNegativos++;
			ret = 0;
		}
	}
	return ret;
}
