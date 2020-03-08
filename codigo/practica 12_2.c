#include <stdio.h>

/*
* Este programa contiene dos funciones: la función main y la función incremento. La
* función main manda llamar a la función incremento dentro de un ciclo for. La función
* incremento aumenta el valor de la variable enteraGlobal cada vez que es invocada.
*/

void incremento();

int enteraGlobal = 0;   // La variable enteraGlobal es vista por todas
                        // las funciones (main e incremento) [modificado]
int main(){
    printf("\n");
    for (int cont=0 ; cont<5 ; cont++){
        // La variable cont es local a la función main
        incremento();
    }
    return 999;
}

void incremento(){
    int enteraLocal = 5;
    // La variable enteraLocal es local a la función incremento
    enteraGlobal += 2;
    printf("global(%i) + local(%i) = %d\n",enteraGlobal, enteraLocal, enteraGlobal+enteraLocal);
}
