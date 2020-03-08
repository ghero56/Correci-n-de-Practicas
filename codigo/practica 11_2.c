#include "acentos.h"
#include <stdio.h>
/*
* Este programa genera un arreglo unidimensional de 5 elementos y
* accede a cada elemento del arreglo a través de un ciclo for.
*/
int main (){
    #define TAMANO 5
    int lista[TAMANO] = {10, 8, 5, 8, 7};

    printf("\n\tLista\n");// [modificado]
    for (int i = 0 ; i < 5 ; i++){// [modificado]
        printf("\nCalificaci%cn del alumno %d es %d", oa , i+1, lista[i]);// [modificado]
    }

    printf("\n");

    return 0;
}
