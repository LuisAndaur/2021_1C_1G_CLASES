#include <stdio.h>
#include <stdlib.h>

int sumarv3();

int main()
{
    int rta;

    rta = sumarv3();
    printf("El resultado es %d\n", rta);
    //printf("El resultado es %d\n", sumarv3() );
    return 0;
}


int sumarv3()
{
    int num1;
    int num2;
    int resultado;

    printf("Ingrese un numero: ");
    scanf("%d", num1);
    printf("Ingrese otro numero: ");
    scanf("%d", num2);

    resultado = num1 + num2;

    return resultado;
}
