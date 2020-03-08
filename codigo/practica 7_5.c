#include "acentos.h"// [añadido]
#include <stdio.h>

/*
* Este programa ejemplifica el manejo de operaciones relacionales y los
* operadores lógicos. También muestra la manera de incrementar o decrementar
* una variable y la diferencia entre hacerlo antes (pre) o después (pos).
*/

int main (){
	int num1, num2, res;
	char c1, c2;
	double equis = 5.5;

	num1 = 7;
	num2 = 15;
	c1 = 'h';
	c2 = 'H';

	printf("\n\t***************Expresiones de relaci%cn***************\n\n",oa);// [modificado]
	printf("num1 es menor a num2 ? -> \t%d\n",num1<num2);
	printf("c1 es igual a c2 ? -> \t\t%d\n",c1==c2);
	printf("c1 es diferente a c2 ? -> \t%d\n",c1!=c2);

	printf("\n\t*****************Expresiones l%cgicas*****************\n\n",oa);// [modificado]
	printf("num1 es menor a num2 Y c1 es igual a 'h' ? -> \t%d\n", num1<num2 && c1 == 'h');
	printf("c1 es igual a 's' O c2 es igual a 'H' ? -> \t%d\n", c1 == 's' || c2 == 'H');
	printf("c1 es igual a 's' O c2 es igual a 'S' ? -> \t%d\n", c1 == 's' || c2 == 'S');

	printf("\n\t**************Incrementos y decrementos**************\n\n");
	printf("num1++ -> \t%d\n",num1++);// postincremento (imprime la variable y luego la aumenta)
	printf("--num1 -> \t%d\n",--num1);// predecremento (reduce la variable y luego la imprime)
	printf("++equis -> \t%lf\n",++equis);// preincremento (aumenta la variable y luego la imprime)

	return 0;
}
