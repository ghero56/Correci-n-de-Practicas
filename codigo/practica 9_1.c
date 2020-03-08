#include"acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa genera la tabla de multiplicar de un número dado. [modificado]
* El número se lee desde la entrada estándar (teclado). [modificado]
*/

int main(){
    int num, cont = 0;

    printf("\a----- Tabla de multiplicar -----\n");
    printf("Ingrese un n%cmero: \n",ua);// [modificado]
    scanf("%d", &num);

    printf("La tabla de multiplicar del numero %d es:\n", num);// [modificado]

    while (++cont <= 10)//{ [añadido]
        printf("%d x %d = %d\n", num, cont, num*cont);
    //} [añadido]
    return 0;
}
