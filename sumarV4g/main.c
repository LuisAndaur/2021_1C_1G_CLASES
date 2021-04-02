#include <stdio.h>
#include <stdlib.h>

int sumarv4(int a, int b);

int main()
{
    int num1;
    int num2;
    int resultados;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);
    printf("Ingrese otro numero: ");
    scanf("%d", &num2);

    resultados = sumarv4(num1, num2);

    printf("El resultados es %d\n", resultados);

    return 0;
}


int sumarv4(int a, int b)
{
    /*int rta;

    rta = a + b;

    return rta*/

    return a + b;
}
