#include <stdio.h>
#include <stdlib.h>


/** \brief realiza la division de dos enteros y escribe el resultado en una variable.
 *
 * \param a int     dividendo
 * \param b int     dividor
 * \param c float*  referencia(direccion de memoria) donde se carga el resultado.
 * \return int      retorna 1 si se realizo la operacion o 0 sino.
 *
 */
int dividirPro(int a, int b, float* c);

int main()
{
    /*int num1 = 8;
    int num2 = 0;
    float resultado;
    int ok;

    ok = dividirPro(num1, num2, &resultado);

    if(ok)
    {
        printf("El resultado es %.2f\n", resultado);
    }
    else
    {
        printf("No se pudo realizar la operacion.\n");
    }
*/
    int dia;
    int mes;
    int anio;
    int retorno;

    printf("Ingrese fecha dd/mm/aaaa: ");
    retorno = scanf("%d/%d/%d", &dia, &mes, &anio);

    printf("%d", retorno);//devuelve 3 cuando todas subieron correctamente.

    if(retorno<3)
    {
        printf("Problema para obtener la fecha.");
    }
    else
    {
        printf("La fecha ingresada es %02d/%02d/%d\n", dia, mes, anio);
    }

    return 0;
}


int dividirPro(int a, int b, float* c)
{
    int todoOk = 0;

    if(b!=0 && c!=NULL)
    {
        *c = (float) a/b;
        todoOk = 1;
    }

    return todoOk;
}
