#include "acentos.h"
#include <stdio.h>

/*
* Este programa genera un arreglo unidimensional de 5 elementos y los
* accede a cada elemento del arreglo a través de un ciclo while.
*/

int main (){
    #define TAMANO 5
    int lista[TAMANO] = {10, 8, 5, 8, 7};

    int i = 0;//[modificado]

    printf("\n\tLista\n");// [modificado]
    while (i < 5 ){
        printf("\nCalificaci%cn del alumno %d es %d\n", oa ,i+1, lista[i]);//[modificado]
        i ++ ; // análogo a (i = i + 1) , (i += 1); //[modificado]
    }
    //printf("\n"); [modificado]
    return 0;
}
