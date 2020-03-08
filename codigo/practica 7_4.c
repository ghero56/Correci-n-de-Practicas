#include "acentos.h"// [añadido]
#include <stdio.h>

/*
* Este programa muestra la manera en la que se realiza un moldeo o cast.
* También muestra como manipular números a nivel de bits:
* 	- Corrimiento de bits a la izquierda y a la derecha
*	- Operador AND a nivel de bits
* 	- Operador OR a nivel de bits
*/

int main(){
	short ocho, cinco, cuatro, tres, dos, uno;

	// 8 en binario: 0000 0000 0000 1000
	ocho = 8;
	// 5 en binario: 0000 0000 0000 0101
	cinco = 5;
	// 4 en binario: 0000 0000 0000 0100
	cuatro = 4;
	// 3 en binario: 0000 0000 0000 0011
	tres = 3;
	// 2 en binario: 0000 0000 0000 0010
	dos = 2;
	// 1 en binario: 0000 0000 0000 0001
	uno = 1;

	printf("\n\t***************Operadores aritm%cticos***************\n\n",ea);// [modificado]
	double res = (double)cinco/dos; // Casteo[correccion] de tipo short a double
	printf("5 / 2 = %lf\n", res);
	printf("5 m%cdulo 2 = %d\n",oa, cinco%dos);

	printf("\n\t*****************Operadores l%cgicos*****************\n\n",oa);// [modificado]
	printf("8 >> 2 = %d\n", ocho>>dos);
	printf("8 << 1 = %d\n", ocho<<1);
	printf("5 & 4 = %d\n", cinco&cuatro);
	printf("3 | 2 = %d\n", tres|dos);

	printf("\n");
	return 0;
}
