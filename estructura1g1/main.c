#include <stdio.h>
#include <stdlib.h>

/*struct
{
    char nombre[20];
    int edad;
    char sexo;
    float sueldo;
}eEmpleado;*/

typedef struct
{
    int legajo;
    char nombre[20];
    int edad;
    char sexo;
    float sueldo;
}eEmpleado;

void mostrarEmpleado(eEmpleado unEmpleado);

int main()
{
    //struct eEmpleado empleado1;
    eEmpleado emp1;// = {"Lucia",24,'f',67500};

    printf("Ingrese legajo: ");
    scanf("%d", &emp1.legajo);

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(emp1.nombre);

    printf("Ingrese edad: ");
    scanf("%d", &emp1.edad);

    printf("Ingrese sexo: ");
    fflush(stdin);
    scanf("%c", &emp1.sexo);

    printf("Ingrese sueldo: ");
    scanf("%f", &emp1.sueldo);

    mostrarEmpleado(emp1);

//    printf("%d\n", emp1.legajo);
//    printf("%s\n", emp1.nombre);
//    printf("%d\n", emp1.edad);
//    printf("%c\n", emp1.sexo);
//    printf("%.2f\n", emp1.sueldo);

    return 0;
}

void mostrarEmpleado(eEmpleado unEmpleado)
{
    printf("%d  %s  %d  %c  %.2f\n",
           unEmpleado.legajo,
           unEmpleado.nombre,
           unEmpleado.edad,
           unEmpleado.sexo,
           unEmpleado.sueldo);
}
