#include "biblioteca.h"

int enteros(int a)
{
	if(a>0)
	{
		a = 1;
	}
	else
	{
		if(a<0)
		{
			a=-1;
		}
		else
		{
			a=0;
		}
	}

	return a;
}
