#include"acentos.h" // [añadido]
#include <stdio.h>

/*
* Este programa obtiene el promedio de calificaciones ingresadas por
* el usuario. Las calificaciones se leen desde la entrada estándar (teclado).
* La inserción de calificaciones termina cuando el usuario presiona una tecla
* diferente de ‘S’ o ‘s’.
*/

int main(){
    char op = 'n';
    double sum = 0, calif = 0;
    int veces = 0;

    printf("\n\tSuma de calificaciones\n\n");// [modificado]

    do{
        printf("Ingrese la calificaci%cn: ",oa); // [modificado]
        scanf("%lf", &calif);
        veces++;
        sum = sum + calif;

        printf("%cDesea sumar otra? (S/N)\n\t->",in);// [modificado]
        setbuf(stdin, NULL); // limpia el buffer del teclado
        scanf("%c",&op);
        getchar();
    }while(op == 'S' || op == 's');

    printf("\n\aEl promedio de las calificaciones ingresadas es: %lf\n", sum/veces);// [modificado]

    return 0;
}
