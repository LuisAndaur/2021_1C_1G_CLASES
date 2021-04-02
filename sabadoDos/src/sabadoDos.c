/*
 ============================================================================
 Name        : sabadoDos.c
 Author      : Luis Andaur
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//#include "biblioteca.h"

float promedioPositivos(int acumulador, int contador);
//int cantidadCeros(int);
//int sumaAntecesores(int);

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int i;
	int validar;
	float promedio;
	int acumuladorPositivos;
	int contadorPositivo;

	acumuladorPositivos = 0;
	contadorPositivo = 0;

	for(i=0;i<3;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if(numero>0)
		{
			validar = 1;
		}
		else
		{
			if(numero<0)
			{
				validar = -1;
			}
			else
			{
				validar = 0;
			}
		}//fin if else

		switch(validar)
		{
			case 1:
				acumuladorPositivos =+ numero;
				contadorPositivo++;
				break;
		}

	}//fin for


	promedio = promedioPositivos(acumuladorPositivos, contadorPositivo);
	printf("El promedio es: %.2f", promedio);


	return EXIT_SUCCESS;
}

float promedioPositivos(int acumulador, int contador)
{
	float promedio;

	promedio = acumulador/contador;

	return promedio;

}


//int cantidadCeros(int numero);
//int sumaAntecesores(int numero);
