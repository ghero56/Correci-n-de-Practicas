#include<stdio.h>
#include<string.h>// [añadido]

/*
* Este programa muestra el manejo de cadenas en lenguaje C.
*/

int main(){
    char palabra[20];
    int i=0;
    printf("\nIngrese una palabra: ");
    scanf("%s", palabra);
    printf("\nLa palabra ingresada es: %s\n", palabra);
    for (i = 0 ; i < strlen(palabra) ; i++){// [modificado]
        printf("%c\n", palabra[i]);
    }
    return 0;
}
