#include"acentos.h"//[añadido]
#include <stdio.h>

/*
* Este programa permite elegir una opción del menú a partir del entero
* ingresado. La opción se lee desde la entrada estándar (el teclado).
*/

int main(){
    // la enumeracion es un arreglo por lo tanto comienza en 0[añadido]
    // Los valores de una enumeración son enteros y constantes
    enum diasSemana {LUNES, MARTES, MIERCOLES, JUEVES, VIERNES, SABADO, DOMINGO};
    int op;

    printf("Ingrese el d%ca de la semana.\n",ia);// [modificado]
    printf("1) Lunes\n");
    printf("2) Martes\n");
    printf("3) Mi%crcoles\n",ea);// [modificado]
    printf("4) Jueves\n");
    printf("5) Viernes\n");
    printf("6) S%cbado\n",aa);// [modificado]
    printf("7) Domingo\n");
    scanf("%d", &op);

    switch(op-1){
        case LUNES://la funcion en cualquiera de los dos casos es la misma [añadido]
        case MARTES://al faltar la palabra reservada break; [añadido]
            printf("Inicio de semana.\n");
            break;
        case MIERCOLES:
            printf("Mitad de semana.\n");
            break;
        case JUEVES:
            printf("¡Casi inicia el fin de semana!\n");
            break;
        case VIERNES:
        case SABADO:
            printf("¡Fin de semana!\n");
            break;
        case DOMINGO:
            printf("D%ca de descanso.\n",ia);//[modificado]
            break;
        //default: no es necesario[modificado]
    }
    return 0;
}
