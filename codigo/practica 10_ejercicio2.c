#include <stdio.h>

void main(){
    int i, j;
    for(i=1; i<10; i++){
        printf("\nTabla del %i\n", i);
        for(j=1; j==10; j++){
            printf("%i X %i = %i\n", i, j, i*j);
        }
    }
}
