#include "andaur.h"

int maximum(int a, int b, int c)
{
    int maximo;

    if(a>b && a>c)
    {
        maximo = a;
    }
    else
    {
        if(b>c)
        {
            maximo = b;
        }
        else
        {
            maximo = c;
        }
    }
    return maximo;
}
