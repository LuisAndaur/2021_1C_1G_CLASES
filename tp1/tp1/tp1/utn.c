#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s", mensaje);
    scanf("%d", &auxiliar);
    return auxiliar;
}

float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s", mensaje);
    scanf("%f", &auxiliar);
    return auxiliar;
}

char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%c", &auxiliar);
    return auxiliar;
}










char utn_getNumeroAleatorio(int desde, int hasta, int iniciar)
{
    if(iniciar)
        srand(time(NULL));
    return desde + (rand() % (hasta + 1 - desde));
}











int utn_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
    int bufferInt;
    int retorno = -1;
    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<=maximo && reintentos>-1)
    {
        do
        {
            printf("%s", mensaje);
            scanf("%d", &bufferInt);
            if(bufferInt>=minimo && bufferInt<= maximo)
            {
                *pResultado = bufferInt;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }while(reintentos>-1);
    }
    return retorno;
}


int utn_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos)
{
    float bufferFloat;
    int retorno = -1;
    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<=maximo && reintentos>-1)
    {
        while(reintentos>-1)
        {
            printf("%s", mensaje);
            if(getFloat(&bufferFloat)==1)
            {
                if(bufferFloat>=minimo && bufferFloat<= maximo)
                {
                    *pResultado = bufferFloat;
                    retorno = 0;
                    break;
                }
                fflush(stdin);
                printf("%s", mensajeError);
                reintentos--;
            }
        }
    }
    return retorno;
}



int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
    char bufferChar;
    int retorno = -1;
    if(pResultado!=NULL && mensaje!=NULL && mensajeError!=NULL && minimo<=maximo && reintentos>-1)
    {
        do
        {
            printf("%s", mensaje);
            fflush(stdin);
            scanf("%c", &bufferChar);
            if(bufferChar>=minimo && bufferChar<= maximo)
            {
                *pResultado = bufferChar;
                retorno = 0;
                break;
            }
            else
            {
                printf("%s", mensajeError);
                reintentos--;
            }
        }while(reintentos>-1);
    }
    return retorno;
}

*/


int mostrarMenu(int numA, int numB, int flagA, int flagB)
{
    int opcion;

    system("cls");
    printf("\t||| CALCULADORA |||\n\n");
    printf("1- Ingresar 1er operando A = ");
    if(flagA)
    {
         printf("%d\n", numA);
    }
    else
    {
        printf("x\n");
    }
    printf("2- Ingresar 2do operando B = ");
    if(flagB)
    {
         printf("%d\n", numB);
    }
    else
    {
        printf("y\n");
    }
    printf("3- Calcular todas las operaciones.\n");
        printf("\ta- Calcular la suma (A + B)\n");
        printf("\tb- Calcular la resta (A - B)\n");
        printf("\tc- Calcular la division (A / B)\n");
        printf("\td- Calcular la multiplicacion (A * B)\n");
        printf("\te- Calcular el factorial (A!) (B!)\n");
    printf("4- Informar resultados.\n");
    printf("5- Salir\n");
    printf("\nIngrese opcion: ");
    scanf("%d", &opcion);

    return opcion;
}



int pedirOperando()
{
    int operando;

    printf("\nIngrese un numero: ");
    scanf("%d", &operando);

    return operando;
}

int sumar(int a, int b)
{
    int resultado;

    resultado = a + b;

    return resultado;
}

int restar(int a, int b)
{
    int resultado;

    resultado = a - b;

    return resultado;
}

int multiplicar(int a, int b)
{
    int resultado;

    resultado = a * b;

    return resultado;
}

int dividir(int a, int b, float* division)
{
    int retorno = 0;

    if(b!=0)
    {
        *division = (float)a / b;
        retorno = 1;
    }

    return retorno;
}

long long int factorial(int n)
{
    long long int respuesta = 1;

    for(long long int i=1;i<=n;i++)
    {
        respuesta *= i;
    }

    return respuesta;
}

void calcularOperaciones(int numA, int numB, int* suma, int* resta, int* multiplicacion, int* rDividir, float* division, long long int* factorialA, long long int* factorialB)
{
    *suma = sumar(numA, numB);
    *resta = restar(numA, numB);
    *multiplicacion = multiplicar(numA, numB);
    *rDividir = dividir(numA, numB, division);
    *factorialA = factorial(numA);
    *factorialB = factorial(numB);
}


void mostrarResultados(int numA, int numB, int* suma, int* resta, int* multiplicacion, int* rDividir, float* division, long long int* factorialA, long long int* factorialB)
{
    printf("\nSelecciono la opcion 4 \nLos resultados son:\n");
    printf("\ta- El resultado de (%d + %d) es: %d\n", numA, numB, *suma);
    printf("\tb- El resultado de (%d - %d) es: %d\n", numA, numB, *resta);
    printf("\tc- El resultado de (%d * %d) es: %d\n", numA, numB, *multiplicacion);
    if(rDividir)
    {
        printf("\td- El resultado de (%d / %d) es: %.2f\n", numA, numB, *division);
    }
    else
    {
        printf("\td- No es posible dividir por cero\n");
    }
    printf("\te- El factorial de (%d!) es: %I64d y el factorial de (%d!) es: %I64d\n", numA, *factorialA, numB, *factorialB);
}
