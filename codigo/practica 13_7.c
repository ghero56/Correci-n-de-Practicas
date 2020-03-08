#include <stdio.h>

/*
* Este programa realizar una copia exacta de dos archivos. Los
* nombres de los archivos (origen y destino) se reciben como
* argumentos de la función principal.
*/

int main(int argc, char **argv) {
    FILE *archEntrada, *archivoSalida;
    unsigned char buffer[2048]; // Buffer de 2 Kbytes
    int bytesLeidos;

    // Si no se ejecuta el programa correctamente
    if(argc < 3) {
        printf("\nEjectuar el programa de la siguiente manera:\n");// [modificado]
        printf("\tnombre_programa    archivo_origen   archivo_destino\n");// [modificado]
        return 1;
    }

    // Se abre el archivo de entrada en modo de lectura y binario
    archEntrada = fopen(argv[1], "rb");
    if(!archEntrada) {
        printf("\n\nEl archivo %s no existe o no se puede abrir\n", argv[1]);// [modificado]
        return 1;
    }

    archivoSalida = fopen(argv[2], "wb");
    // Se crea o sobreescribe el archivo de salida en modo binario
    if(!archivoSalida) {
        printf("\nEl archivo %s no puede ser creado", argv[2]);// [modificado]
        return 1;
    }

    // Copia archivos
    while (bytesLeidos = fread(buffer, 1, 2048, archEntrada))
        fwrite(buffer, 1, bytesLeidos, archivoSalida);

    // Cerrar archivos
    fclose(archEntrada);
    fclose(archivoSalida);

    return 0;
}
