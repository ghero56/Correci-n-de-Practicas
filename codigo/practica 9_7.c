#include "acentos.h"
#include <stdio.h>

/*
* Este programa hace una suma de números. Si la suma rebasa la cantidad
* de 50 el programa se detiene.
*/

#define VALOR_MAX 5

int main (){
    int Suma = 0 , Numero = 0 , Cont = 0;

    while (Cont < VALOR_MAX){
        printf("\nIngrese un n%cmero: ",ua);// [modificado]
        scanf("%d", &Numero);
        Suma += Numero;
        Cont++;
        if (Suma > 50){
            printf("\nSe rebas%c la cantidad l%cmite.\n",oa,ia);
            break;
        }
    }

    printf("\nEl valor de la suma es: %d\n", Suma);// [modificado]

    return 0;
}
