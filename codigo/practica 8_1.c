#include<stdio.h>

/*
* Este programa valida si el número a es mayor al número b.
*/

int main (){
	int a, b;
	a = 3;
	b = 2;

	if (a > b) //{[añadido]
		printf("\ta (%d) es mayor a b (%d).\n",a,b);
	//}[añadido]

	printf("\tEl programa sigue su flujo.\n");
	return 0;
}
