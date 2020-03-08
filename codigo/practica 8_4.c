#include"acentos.h"// [añadido]
#include<stdio.h>

/*
* Este programa ordena en forma descendente tres valores enteros dados.
* Los valores se leen desde la entrada estándar (el teclado).
*/

int main(){
	int uno, dos, tres;
	printf ("\nIngrese 3 n%cmeros diferentes\n",ua);//[modificado]
	scanf ("%d %d %d", &uno, &dos, &tres);

	if(uno > dos){
		if(dos > tres){
			printf("\n\t%d es mayor a %d que es mayor a %d\n", uno, dos, tres);
		}
		else{
			if(uno > tres){
				printf("\n\t%d es mayor a %d que es mayor a %d\n", uno, tres, dos);
			}
			else{
				printf("\n\t%d es mayor a %d que es mayor a %d\n", tres, uno, dos);
			}
		}
	}

	else{
		if(dos > tres){
			if(tres > uno){
				printf("\n\t%d es mayor a %d que es mayor a %d\n", dos, tres, uno);
			}
			else{
				printf("\n\t%d es mayor a %d que es mayor a %d\n", dos, uno, tres);
			}
		}
		else{
			printf("\n\t%d es mayor a %d que es mayor a %d\n", tres, dos, uno);
		}
	}

	return 0;
}
