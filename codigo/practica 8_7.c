#include <stdio.h>

/*
* Este programa crea diversas variables tipo enum (enumerador) y
* permite visualizar la manera en la que se maneja el tipo de dato.
*/

int main(){
    // declaración de la enumeración
    enum boolean {NO, YES}; // 0 = NO , 1 = YES[añadido]

    // declaración de una variable tipo enumeración
    enum boolean valorBooleano;
    valorBooleano = YES;

    // Se comprueba que el valor de una enumeración es entero
    printf("\n%d\n", valorBooleano);//[modificado]

    // Se comprueba que el valor de una enumeración se puede reasignar
    enum diasSemana {LUNES, MARTES, MIERCOLES=5, JUEVES, VIERNES};
    printf("\n%d", LUNES);// primer elemento = 0 [añadido]
    printf("\n%i", MARTES);// segundo elemento = 1 [añadido]
    printf("\n%d", MIERCOLES);// tercer elemento con valor reasignado = 5 [añadido]
    // el valor anterior modifica los siguientes [añadido]
    printf("\n%i", JUEVES);// cuarto elemento = 6 [añadido]
    printf("\n%d\n", VIERNES);// quinto elemento = 7 [añadido]

    return 0;
}
