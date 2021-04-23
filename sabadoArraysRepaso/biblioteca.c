#include <stdio.h>
#include <stdlib.h>

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
	printf("\n\n");
	return vec[tam];
}



int cantidadPositivosNegativos(int vec[], int tam, int* posNeg)
{
	int ret = 0;
	int contadorPositivoNegativos = 0;

	for(int i=0;i<tam;i++)
	{
		if(vec[i]>0 || vec[i]<0)
		{
			contadorPositivoNegativos++;
			*posNeg = contadorPositivoNegativos;
		}
		ret = 1;
	}
	return ret;
}

int sumarPares(int vec[], int tam, int* pares)
{
    int ret = 0;
    int contadorPares = 0;

    for(int i=0;i<tam;i++)
    {
        if(vec[i]%2==0)
        {
            contadorPares++;
            *pares = contadorPares;
        }
        ret = 1;
    }

    return ret;
}

int mayorImpares(int vec[], int tam, int* impares)
{
    int ret = 0;
    int flagImpar = 1;

    for(int i=0;i<tam;i++)
    {
        if(vec[i]%2!=0 && ( flagImpar || vec[i]>*impares ))
        {
            *impares = vec[i];
            flagImpar = 0;
        }
        ret = 1;
    }

    return ret;
}

void mostrarListados(int vec[], int tam)
{
    printf("*** Listado numeros ingresados ***\n");

    for(int i=0;i<tam;i++)
    {
        printf("%d ", vec[i]);
    }

    printf("\n\n");
}

void listadoPares(int vec[], int tam)
{
    printf("*** Listado pares ***\n");

    for(int i=0;i<tam;i++)
    {
        if(vec[i]%2==0)
        {
            printf("%d ", vec[i]);
        }
    }

    printf("\n\n");
}

void listadoImpares(int vec[], int tam)
{
    printf("*** Listado impares ***\n");

    for(int i=0;i<tam;i++)
    {
        if(vec[i]%2!=0)
        {
            printf("%d ", vec[i]);
        }
    }

    printf("\n\n");
}
