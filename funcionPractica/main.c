#include <stdio.h>
#include <stdlib.h>
#include "andaur.h"

int main()
{
    int num1;
    int num2;
    int num3;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese un numero: ");
    scanf("%d", &num2);
    printf("Ingrese un numero: ");
    scanf("%d", &num3);

    resultado = maximum(num1, num2, num3);

    printf("El mayor es: %d\n", resultado);
    return 0;
}
