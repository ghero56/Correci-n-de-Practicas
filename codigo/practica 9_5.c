#include "acentos.h" // [añadido]
#include <stdio.h>

/*
* Este programa genera un arreglo unidimensional de 5 elementos y
* accede a cada elemento del arreglo a través de un ciclo for.
*/

int main (){
    int NumAlumnos = 5;
    float Calif = 0.0, Promedio = 0.0; // [modificado]

    printf("\n\tPromedio de calificaciones\n");// [modificado]

    for (int i = 0 ; i < NumAlumnos ; i++){ // [modificado]
        printf("\nIngrese la calificaci%cn del alumno %d: ", oa , i+1); // [modificado]
        scanf("%f",&Calif);// [modificado]
        Promedio += Calif;// [modificado]
    }

    printf("\nEl promedio de las calificaciones ingresadas es: %f\n",Promedio/NumAlumnos);// [modificado]
    return 0;
}
