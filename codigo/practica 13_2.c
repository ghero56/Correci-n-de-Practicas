#include "acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa permite lee el contenido de un archivo, de ser posible, a
* través de la función fgets.
*/

int main() {
    FILE *archivo;
    char caracteres[50];
    archivo = fopen("gets.txt", "r");

    if (archivo != NULL) {
        printf("\nEl archivo se abri%c correctamente.\n",oa);// [modificado]
        printf("\n\tContenido del archivo: ");// [modificado]
        while (feof(archivo) == 0) {
            fgets (caracteres, 50, archivo);
            printf("\t%s\n", caracteres);// [modificado]
        }
        fclose(archivo);
    }

    return 0;
}
