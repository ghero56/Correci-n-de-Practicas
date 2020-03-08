#include<stdio.h>
/*
* Este programa accede a las localidades de memoria de distintas variables a
* través de un apuntador.
*/
int main () {
    int a = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0};
    int *apEnt;
    apEnt = &a;// direccion de memoria de a [añadido]

    printf("\na = 5, b = 10, c[10] = {5, 4, 3, 2, 1, 9, 8, 7, 6, 0}\n");// [modificado]
    printf("\n\tapEnt = &a\n");

    b = *apEnt;// valor de a [añadido]
    printf("\tb = *apEnt \t-> b = %i\n", b);// [modificado]

    b = *apEnt +1;// valor de a+1 [añadido]
    printf("\tb = *apEnt + 1 \t-> b = %i\n", b);// [modificado]

    *apEnt = 0;// se actualiza el valor de a desde el apuntador [añadido]
    printf("\t*apEnt = 0 \t-> a = %i\n", a);// [modificado]

    apEnt = &c[0];  // se apunta a la dirrecion de memoria [añadido]
                    // del valor 0 del arreglo c [añadido]
    printf("\tapEnt = &c[0] \t-> apEnt = %i\n", *apEnt);// [modificado]

    return 0;
}
