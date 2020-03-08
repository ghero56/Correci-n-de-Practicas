#include "acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa permite escribir una cadena dentro de un archivo, de ser
* posible, a través de la función fputs.
*/

int main() {
    FILE *archivo;

    char escribir[] = "Escribir cadena en archivo mediante fputs. \n\tFacultad de Ingeniería.\n";
    // los acentos si se imprimen en el documento creado [añadido]

    archivo = fopen("puts.txt", "r+");

    if(archivo != NULL){
        printf("\nEl archivo se abri&c correctamente.\n",oa);// [modificado]
        fputs (escribir, archivo);
        fclose(archivo);
    }
    else{
        printf("\nError al abrir el archivo.\n");// [modificado]
        printf("El archivo no existe o no se tienen permisos de lectura.\n");
    }

    return 0;
}
