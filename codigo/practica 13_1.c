#include "acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa permite abrir un archivo en modo de lectura, de ser posible.
*/

int main() {
    FILE *archivo;
    archivo = fopen("archivo.txt", "r");

    if (archivo != NULL){
        printf("\nEl archivo se abri%c correctamente.\n",oa);// [modificado]
        int res = fclose(archivo);// la funcion fclose regresa un valor booleano (0/1) [añadido]
        printf("fclose = %d\n", res);
    }
    else{
        printf("\nError al abrir el archivo.\n");
        printf("El archivo no existe o no se tienen permisos de lectura.\n");
    }

    return 0;
}
