#include "acentos.h"
#include <stdio.h>

/*
* Este programa crea un apuntador de tipo carácter.
*/

int main () {
    char *ap, c = 'a';
    ap = &c;

    printf("\nCaracter: %c\n",*ap);// [modificado]
    printf("C%cdigo ASCII: %d\n",oa,*ap);
    printf("Direcci%cn de memoria: %d\n",oa,ap);

    return 0;
}
