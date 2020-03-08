#include "acentos.h"// [añadido]
#include <stdio.h>

/*
* Este programa muestra la manera en la que se declaran y asignan
* las variables estáticas y las constantes.
*/

int main() {
	const int constante = 25;

	static char sta = 'a'; // [modificado]

	printf("\nValor constante: %i\n", constante);
	printf("\nValor est%ctico (inicial): %c\n",aa, sta); // [modificado]
	// El valor de la variable declarada como constante no puede cambiar.
	// La siguiente línea genera un error al compilar si se quita el comentario:
		// constante = 30;
	// Las variables estáticas sí pueden cambiar de valor
	sta = 'b';
	// para ser invocadas dentro de cualquier funcion del documento [añadido]
	// con el mismo nombre o incluso en otros documentos [añadido]
	printf("\nValor est%ctico (modificado): %c\n",aa,sta);// [modificado]
	return 0;
}
