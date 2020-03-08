#include"acentos.h"// [añadido]
#include <stdio.h>

/*
* Este programa permite validar si un número es par o impar.
* El número se lee desde la entrada estándar (el teclado).
*/

int main(){
    int num;
    printf("\nIngrese un n%cmero: ",ua);//[modificado]
    scanf("%d",&num);

    if ( num%2 == 0 )//{[añadido]
        printf("\nEl n%cmero %d es par.\n",ua,num);//[modificado]
    //}[añadido]
	else//{[añadido]
        printf("El n%cmero %d es impar.\n",ua,num);//[modificado]
     //}[añadido]
     return 0;
}
