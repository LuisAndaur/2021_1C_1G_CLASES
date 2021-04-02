#include <stdio.h>
#include <stdlib.h>
//system("cls")

char menu();

/** \brief Pone a 1 el valor de una bandera
 *
 * \param pFlag int* Referencia a la bandera
 * \return void
 *
 */
void activarFlag(int* pFlag);


/** \brief              Pone a 0 el valor de una bandera
 *
 * \param pFlag int*    Referencia a la bandera
 * \return void
 *
 */
void resetFlag(int* pFlag);

int main()
{
    char seguir;
    int flagSaludo;
    int flagBrindar;

    seguir = 's';
    resetFlag(&flagSaludo);
    resetFlag(&flagBrindar);

    do
    {
       switch(menu())
        {
        case 'a':
            printf("Hola como estas?\n");
            activarFlag(&flagSaludo);
            system("pause");
            break;

        case 'b':
            if(flagSaludo)
            {
                printf("Chin chin\n");
                flagBrindar = 1;
            }
            else
            {
                printf("Antes de brindar primero deberiamos saludarnos.\n");
            }
            system("pause");
            break;

        case 'c':
            if(flagSaludo && !flagBrindar)
            {
                printf("Primero deberiamos brindar antes de despedirnos.\n");
            }
            else
            {
                if(!flagSaludo)
                {
                    printf("Antes de despedirnos primero saludemonos.\n");
                }
                else
                {
                    printf("Chau, nos vemos.\n");
                    resetFlag(&flagSaludo);
                    resetFlag(&flagBrindar);
                }
            }
            system("pause");
            break;

        case 'd':
            printf("Quiere cancelar la salida?.\n");
            fflush(stdin);
            seguir = getchar();
            break;

        default:
            printf("Opcion invalida.\n");
            system("pause");
            break;
        }

    }
    while(seguir == 's');



    return 0;
}


char menu()
{
    char opcion;

    system("cls");// clear screen (limpiar pantalla.
    printf("        *** Menu de opciones ***\n\n");
    printf("a- Saludar\n");
    printf("b- Brindar\n");
    printf("c- Despedir\n");
    printf("d- Salir\n");
    printf("\nIngrese opcion: ");
    fflush(stdin);
    scanf("%c", &opcion);

    return opcion;
}


void activarFlag(int* pFlag)
{
    *pFlag = 1;
}

void resetFlag(int* pFlag)
{
    *pFlag = 0;
}
