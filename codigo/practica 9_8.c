#include "acentos.h"// [añadido]
#include <stdio.h>
#define LIMITE 5

/*
* Este programa obtiene la suma de un LIMITE de números pares ingresados
* los numeros impares son ignorados en el resultado final [añadido]
*/

int main (){
    int Contador = 1 , Numero = 0 , Suma = 0;

    while (Contador <= LIMITE){
        printf("\nIngrese n%cmero par %d: ",ua, Contador);// [modificado]
        scanf("%d",&Numero);
        if (Numero%2 != 0){
            printf("\nEl n%cmero insertado no es par.\n",ua);// [modificado]
            continue;
        }
        Suma += Numero;
        Contador++;
    }

    printf("\nLa suma de los n%cmeros es: %d\n",ua,Suma);// [modificado]

    return 0;
}
