#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    char letra;
    float pi;

    letra = 'a'; //mascara %c
    numero = 123; //mascara %d
    pi = 3.14; //mascara %f --- con 2 decimales %.2f

    //printf("La variable numero vale: %d", numero);
    //printf("La variable letra vale: %c", letra);
    //printf("La variable pi vale: %f", pi);

    //printf("La variable pi vale: %.2f y numero vale: %d", pi, numero);

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    printf("Ingrese un caracter: ");
    fflush(stdin);
    scanf("%c", &letra);

    printf("Ingrese la altura: ");
    scanf("%f", &altura);


    printf("numero vale %d\n", numero);
    printf("letra vale %c\n", letra);
    printf("altura vale %.2f mts", altura);



    return 0;
}
