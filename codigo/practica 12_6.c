//############## calculadora.c ##############
#include <stdio.h>

/*
* Este programa contiene el método principal, el cual invoca a las funciones
* del archivo funcEstatica.c.
*/

int suma(int,int);
//static int resta(int,int);
int producto(int,int);
//static int cociente (int,int);

int main(){
    printf("\n5 + 7 = %i\n",suma(5,7));// [modificado]
    //printf("9 - 77 = %d\n",resta(9,77));
    printf("6 * 8 = %i\n",producto(6,8));
    //printf("7 / 2 = %d\n",cociente(7,2));
}
