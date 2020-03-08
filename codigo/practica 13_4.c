#include<stdio.h>

/*
* Este programa permite leer el contenido de un archivo,
* de ser posible, a través de la función fscanf.
*/

int main() {
    FILE *archivo;
    char caracteres[50];
    archivo = fopen("fscanf.txt", "r");
    if(archivo != NULL){
        while (feof(archivo)==0){
            fscanf(archivo, "%s", caracteres);
            printf("\n\t%s\n", caracteres);// [modificado]
        }

        fclose(archivo);
    }
    else
        printf("\nEl archivo no existe.\n");// [modificado]

    return 0;
}
