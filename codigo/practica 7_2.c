#include "acentos.h"// [añadido]
#include <stdio.h>

/*
* Este programa muestra la manera en la que se declaran y asignan variables
* de diferentes tipos: numéricas (enteras y reales) y caracteres, así como
* la manera en la que se imprimen los diferentes tipos de datos.
*/

int main() {
	/*Es recomendable al inicio declarar
	todas las variables que se van a utilizar
	en el programa */

	// variable entera
	int enteroNumero;

	//variable caracter[añadido]
	char caracterA = 65; // Convierte el entero a caracter [correccion] (ASCII)

	// Variable real[correccion]
	double puntoFlotanteNumero;

	// Asignar un valor del teclado a una variable
	printf("Escriba un valor entero: ");
	scanf("%d", &enteroNumero);
	printf("Escriba un valor real: ");
	scanf("%lf", &puntoFlotanteNumero);

	// Imprimir los valores con formato
	printf("\nImprimiendo las variables:\a\n"); // [modificado]
	printf("\n\tValor de enteroNumero = %i\n", enteroNumero);
	printf("\tValor de caracterA = %c\n",caracterA);
	printf("\tValor de puntoFlotanteNumero = %lf\n", puntoFlotanteNumero);

	//imprime el valor en base 16[añadido]
	printf("\n\tValor de enteroNumero en base 16 (hexadecimal) = %x\a\n", enteroNumero);
	//imprime el valor ASCII del caracter
	printf("\tValor de caracter A en codigo hexadecimal = %i\n", enteroNumero);
	//imprime el flotante como un producto
	printf("\tValor de puntoFlotanteNumero en notaci%cn cient%cfica = %e\n",oa,ia, puntoFlotanteNumero);// [modificado]

	// La función getchar() espera un carácter(caracter)[correccion] para continuar la ejecución
	getchar();
	return 0;
}
