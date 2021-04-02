#include <stdio.h>
#include <stdlib.h>

void duplicarRef(int* a);

//referencia es sinonimo de direccion de memoria de la variable
int main()
{
    int x = 5;

    duplicarRef(&x);//pasaje por referencia

    printf("x vale %d\n",x);

    //int* puntero;//guarda direccion de memoria de variables enteras

    //puntero = &x;

    //*puntero = 14;//es igual que decir x = 14 o *(&x) = 14

    // & operador de direccion
    // * operador de indireccion (valor escrito en esa direccion de memoria)
    //*(&x) = 20;

    //printf("%d\n", *(&x));
    //printf("%d\n", x);

    return 0;
}



void duplicarRef(int* a)
{
    *a = *a * 2;//*a es el valor de x de main
}
