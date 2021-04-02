#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h> para __purge en linux

/*
Realizar el algoritmo que permita ingresar los datos de los alumnos de una
división de la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: &quot;libre&quot; - P: &quot;presencial&quot; – R: &quot;remota&quot;)
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que
corresponda.
a) El Legajo del mejor promedio que femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)
*/

int main()
{
    int legajo;
    char tipoCursada;
    int cantidad;
    char sexo;
    int nota;
    int edad;
    int legajoMejorPromedio;
    int PromedioMaximo;
    int flagMasJoven;
    int legajoMasJoven;
    int edadMasJoven;
    int contadorMasculinos;
    int contadorFemeninos;
    int contadorBinarios;
    int acumuladorMasculinos;
    int acumuladorFemeninos;
    int acumuladorBinarios;
    float promedioMasculinos;
    float promedioFemeninos;
    float promedioBinarios;
    int edadMasMaterias;
    int legajoMasMaterias;
    int masMaterias;
    int flagMasMaterias;
    char seguir;

    seguir = 's';
    flagMasJoven = 1;
    contadorMasculinos = 0;
    contadorFemeninos = 0;
    contadorBinarios = 0;
    acumuladorMasculinos = 0;
    acumuladorFemeninos = 0;
    acumuladorBinarios = 0;
    flagMasMaterias = 0;

    do
    {
        printf("Ingresar legajo: ");
        scanf("%d", &legajo);
        while(legajo<0)
        {
            printf("ERROR: Reingresar legajo: ");
            scanf("%d", &legajo);
        }

        printf("Ingresar tipo cursada l-p-r: ");
        fflush(stdin);
        scanf("%c", &tipoCursada);
        while(tipoCursada!='l' && tipoCursada!='p' && tipoCursada!='r')
        {
            printf("ERROR: Reingresar tipo cursada l-p-r: ");
            fflush(stdin);
            scanf("%c", &tipoCursada);
        }

        printf("Ingresar cantidad de materias 1-7: ");
        scanf("%d", &cantidad);
        while(cantidad<1 || cantidad>7)
        {
            printf("ERROR: Reingresar cantidad de materias 1-7: ");
            scanf("%d", &cantidad);
        }

        printf("Ingresar sexo f-m-o: ");
        fflush(stdin);
        scanf("%c", &sexo);
        while(sexo!='f' && sexo!='m' && sexo!='o')
        {
            printf("ERROR: Reingresar sexo f-m-o: ");
            fflush(stdin);
            scanf("%c", &sexo);
        }

        printf("Ingresar nota promedio 0-10: ");
        scanf("%d", &nota);
        while(nota<0 || nota>10)
        {
            printf("ERROR: Reingresar nota promedio 0-10: ");
            scanf("%d", &nota);
        }

        printf("Ingresar edad 18-120: ");
        scanf("%d", &edad);
        while(edad<18 || edad>120)
        {
            printf("ERROR: Reingresar edad 18-120: ");
            scanf("%d", &edad);
        }

        //c) El promedio de nota por sexo.
        switch(sexo)
        {
            case 'm':
                contadorMasculinos++;
                acumuladorMasculinos = acumuladorMasculinos + nota;
                //b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
                if(tipoCursada=='l' && (flagMasJoven || edad<edadMasJoven))
                {
                    edadMasJoven = edad;
                    legajoMasJoven = legajo;
                    flagMasJoven = 0;
                }
            break;

            case 'f':
                contadorFemeninos++;
                acumuladorFemeninos = acumuladorFemeninos + nota;
                //a-El Legajo del mejor promedio que femenino.
                if(contadorFemeninos == 1 || nota>PromedioMaximo)
                {
                    legajoMejorPromedio = legajo;
                    PromedioMaximo = nota;
                }
            break;

            case 'o':
                contadorBinarios++;
                acumuladorBinarios = acumuladorBinarios + nota;
            break;
        }

        //d) La edad y legajo del que cursa más materias. (Sin importar su género)
        if(flagMasMaterias || cantidad>masMaterias)
        {
            masMaterias = cantidad;
            legajoMasMaterias = legajo;
            edadMasMaterias = edad;
            flagMasMaterias = 1;
        }

        printf("Ingresar otra persona? s/n: ");
        fflush(stdin);
        scanf("%c", &seguir);
    }while(seguir=='s');

    //a-El Legajo del mejor promedio que femenino.
    if(contadorFemeninos==1)
    {
        printf("a) El Legajo del mejor promedio femenino es: %d \n", legajoMejorPromedio);
        promedioFemeninos = (float)acumuladorFemeninos/contadorFemeninos;
        printf("c) El promedio de nota femenino es: %.2f \n", promedioFemeninos);
    }
    else
    {
        printf("a-c) No hay femeninas.\n");
    }

    //b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
    if(flagMasJoven==0)
    {
        printf("b) El legajo del más joven de los alumnos masculinos entre los que dan libre es: %d.\n", legajoMasJoven);
    }
    else
    {
        printf("b) No hay masculinos jovenes que dan libre.\n");
    }

    //c) El promedio de nota por sexo.
    if(contadorMasculinos==1)
    {
        promedioMasculinos = (float)acumuladorMasculinos/contadorMasculinos;
        printf("c) El promedio de nota masculino es: %.2f\n", promedioMasculinos);
    }
    else
    {
        printf("c) No hay masculinos.\n");
    }

    if(contadorBinarios==1)
    {
        promedioBinarios = (float)acumuladorBinarios/contadorBinarios;
        printf("c) El promedio de nota binarios es: %.2f.\n", promedioBinarios);
    }
    else
    {
        printf("c) No hay binarios.\n");
    }

    //d) La edad y legajo del que cursa más materias. (Sin importar su género)
    printf("d) El que cursa mas materias tiene %d anios y su legajo es %d.\n", edadMasMaterias, legajoMasMaterias);
    return 0;
}
