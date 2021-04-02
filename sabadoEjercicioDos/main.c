#include <stdio.h>
#include <stdlib.h>

float promedioPositivos(int acumulador, int contador);

int main()
{
    int numero;
	int i;
	int validar;
	float promedio;
	int acumuladorPositivos;
	int contadorPositivo;
	int flagNegativos;
	int menorNegativos;


	acumuladorPositivos = 0;
	contadorPositivo = 0;
	flagNegativos = 1;

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
				acumuladorPositivos += numero;
				contadorPositivo++;
				break;

            case -1:
				if(flagNegativos || numero<menorNegativos)
                {
                    menorNegativos = numero;
                    flagNegativos = 0;
                }
				break;
		}

	}//fin for


	promedio = promedioPositivos(acumuladorPositivos, contadorPositivo);
	printf("El promedio es: %.2f\n", promedio);
	printf("El contador es: %d\n", contadorPositivo);
	printf("El acumulador es: %d\n", acumuladorPositivos);

    return 0;
}

float promedioPositivos(int acumulador, int contador)
{
	float promedio;

	promedio = (float)acumulador/contador;

	return promedio;

}
