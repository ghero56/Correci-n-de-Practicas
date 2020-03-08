#include <stdio.h>
#include <string.h>

/*
* Este programa permite manejar los argumentos enviados al ejecutarlo.
*/

int main (int argc, char** argv){
    if (argc == 1){
        printf("\nEl programa no contiene argumentos.\n");// [modificado]
        return 88;
    }

    printf("\nLos elementos del arreglo argv son:\n\n");// [modificado]
    for (int cont = 0 ; cont < argc ; cont++ ){
        printf("\targv[%d] = %s\n", cont, argv[cont]);
    }

    return 88;
}
