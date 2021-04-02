#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    /*char x ='f';
    int mun;

    printf("%d\n", sizeof(float));//sizeof es el tamaño
    */

    //pedir 2 numeros e informar el promedio de los mismos

    /*int num1;
    int num2;
    float promedio;

    printf("Ingrese numero 1: ", num1);
    scanf("%d", &num1);

    printf("Ingrese numero 2: ", num2);
    scanf("%d", &num2);

    promedio = (float)(num1 + num2)/2;// (float) es casteo explicito

    printf("El promedio es: %.2f", promedio);*/

    //funciones en <ctype.h>
    char x ='g';
    char h ='P';

    x = toupper(x);//pasar a mayuscula un caracter
    h = tolower(h);//pasar a minuscula un caracter

    printf("%c\n", x);
    printf("%c\n", h);



    char x ='4';
    if(isdigit(x))//validar un digito
    {
        printf("Es un digito\n");
    }
    else
    {
        printf("No es un digito\n");
    }


    char x ='a';
    if(isalpha(x))//validar de la a a la z -- may o min
    {
        printf("No es un digito\n");
    }
    else
    {
        printf("Es un digito\n");
    }


    char x =' ';
    if(isspace(x))//validar un espacio en blaNCO
    {
        printf("Es un espacio en blanco\n");
    }
    else
    {
        printf("No es un espacio en blanco\n");
    }






    return 0;

}
