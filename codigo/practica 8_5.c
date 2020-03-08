#include"acentos.h"//[añadido]
#include<stdio.h>

/*
* Este programa permite elegir una opción del menú a partir del carácter
* ingresado. La opción se lee desde la entrada estándar (el teclado).
*/

int main(){
    char op = '\0';//caracter vacio[añadido]

    printf("\tMen%c\n\n",ua);//[modificado]
    printf("Elegir la opci%cn deseada\n",oa);//[modificado]
    printf("a) Ingresar\n");
    printf("b) Registrarse\n");
    printf("c) Salir\n\t->");// [modificado]
    scanf("%c",&op);

    switch(op) {
        default:
            printf("Opci%cn no v%clida.\n",oa,aa);//[modificado]
            break;
        case 'a':
            printf("Se seleccion%c 'Ingresar'.\n",oa);//[modificado]
            break;
        case 'b':
            printf("Se seleccion%c 'Registrarse'.\n",oa);//[modificado]
            break;
        case 'c':
            printf("Se seleccion%c 'Salir'.\n",oa);//[modificado]
            break;
    }
    return 0;
}
