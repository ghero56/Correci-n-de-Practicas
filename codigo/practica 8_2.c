#include"acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa comprueba que las condiciones son numéricas
* 0 -> falso
* ≠ 0 -> Verdadero
*/

int main(){

	if (0){
		printf("Esta instrucci%cn nunca se ejecuta\n",oa);//[modificado]
		printf("porque la condici%cn siempre es falsa (0).\n",oa);//[modificado]
	}

	if (-38)//{[añadido]
		// El bloque de código de esta estructura if
		// solo consta de una línea porque los comentarios
		// no son tomados en cuenta por el compilador.
		// La condición siempre es verdadera (diferente de 0)
		printf("Esta instrucci%cn siempre se ejecuta.\n",oa);// [modificado]
	//}[añadido]
	return 0;
}
