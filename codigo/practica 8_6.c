#include"acentos.h" //[añadido]
#include <stdio.h>

/*
* Este programa permite elegir una opción del menú a partir del entero
* ingresado. La opción se lee desde la entrada estándar (el teclado).
*/

int main(){
	int op = 0;

	printf("\n\tMen%c\n\n",ua);//[modificado]
	printf("Elegir la opci%cn deseada\n",oa);//[modificado]
	printf("1) Ingresar\n");
	printf("2) Registrarse\n");
	printf("3) Salir\n\t->");// [modificado]
	scanf("%d",&op);

	switch(op) {
		case 1:
			printf("Se seleccion%c 'Ingresar'\n",oa);//[modificado]
			break;
		case 2:
			printf("Se seleccion%c 'Registrarse'\n",oa);//[modificado]
			break;
		case 3:
			printf("Se seleccion%c 'Salir'\n",oa);//[modificado]
			break;
		default:
			printf("Opci%cn no v%clida\n",oa,aa);//[modificado]
	}

	return 0;
}
