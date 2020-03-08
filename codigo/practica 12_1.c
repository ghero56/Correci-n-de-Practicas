#include <stdio.h>
#include <string.h>

/*
* Este programa contiene dos funciones: la función main y la función
* imprimir. La función main manda llamar a la función imprimir. La función
* imprimir recibe como parámetro un arreglo de caracteres y lo recorre de fin a
* inicio imprimiendo cada carácter del arreglo.
*/


    // Prototipo o firma de las funciones del programa
void imprimir(char[]);

    // Definición o implementación de la función main
int main (){
    char nombre[] = "Facultad de Ingenieria";// [modificado]
    imprimir(nombre);
}

    // Implementación de las funciones del programa
void imprimir(char s[]){
    int tam;
    printf("\n");// [añadido]
    for( tam=strlen(s)-1 ; tam>=0 ; tam--)
        printf("%c", s[tam]);
    printf("\n");
}
