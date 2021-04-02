#include <stdio.h>
#include <stdlib.h>

void swap(int* x, int* y);

int main()
{
    /*int a = 20;
    int b = 10;
    int aux;

    printf("a: %d   b: %d\n", a, b);

    aux = a;
    a = b;
    b = aux;

    printf("a: %d   b: %d\n", a, b);//swap(intercambiar entre dos variables sus valores)
    */

    int a = 20;
    int b = 10;

    printf("a: %d   b: %d\n", a, b);

    swap(&a, &b);

    printf("a: %d   b: %d\n", a, b);

    return 0;
}

void swap(int* x, int* y)
{
    int aux;

    aux = *x;
    *x = *y;
    *y = aux;
}
