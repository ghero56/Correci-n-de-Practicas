#include <stdio.h>

/*
* Este programa trabaja con aritmética de apuntadores para acceder a los
* valores de un arreglo.
*/

int main () {
    int arr[] = {5, 4, 3, 2, 1};
    int *apArr;
    apArr = arr;// se le asigna al apuntador la direccion del arreglo en 0 [añadido]

    printf("\nint arr[] = {5, 4, 3, 2, 1};\n");// [modificado]
    printf("apArr = &arr[0]\n");

    int x = *apArr;// se crea la variable x y se le asigna el valor al que apunta apArr [añadido]
    printf("x = *apArr \t -> x = %d\n", x);

    x = *(apArr+1);// se recorre la direccion dentro del arreglo [añadido]
    printf("x = *(apArr+1) \t -> x = %d\n", x);

    x = *(apArr+2);
    printf("x = *(apArr+1) \t -> x = %d\n", x);

    return 0;
}
