#include <stdio.h>
#include <stdlib.h>
#define TAM 5

/** \brief Busca un caracter en un array de caracteres
 *
 * \param letras[] char Array donde se realiza la busqueda
 * \param tam int Tamaño del array
 * \param caracterABuscar char Caracter a buscar
 * \return int Indice de la ubicacion de la primer ocurrencia del caracter buscado o -1si no lo encuentra
 *
 */
int buscarCaracter(char vec[], int tam, char caracterABuscar);



int buscarReemplazar(char vec[], int tam, char caracterABuscar, char reemplazo);

int main()
{
    char letras[TAM] = {'a','r','t','r','f'};
    int reemplazo;

    reemplazo = buscarReemplazar(letras, TAM, 'r', 'z');
    printf("%d \n",reemplazo);

    for(int i=0;i<TAM;i++)
    {
        printf("%c ",letras[i]);
    }

    printf("\n\n");

    return 0;
}


int buscarReemplazar(char vec[], int tam, char caracterABuscar, char reemplazo)
{
    int contadorReemplazo = 0;
    for(int i=0;i<tam;i++)
    {
        if(vec[i] == caracterABuscar)
        {
            vec[i] = reemplazo;
            contadorReemplazo = contadorReemplazo + 1;
        }
    }
    return contadorReemplazo;
}
