#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numA;
    int numB;
    int resultado;
    char seguir;
    char opcion;

    seguir = 's';

    do
    {
        system("cls");
        printf("    ***CALCULADORA***\n");
        printf("Ingresar 1er operando A: ");
        scanf("%d", &numA);

        printf("Ingresar 2do operando B: ");
        scanf("%d", &numB);

        printf("a- Calcular la suma (%d + %d): "), numA, numB;

        printf("e- Salir");
/*
        switch(opcion)
        {
            case 'a':
                s
        }
*/

    }while(seguir=='s');

    return 0;
}
