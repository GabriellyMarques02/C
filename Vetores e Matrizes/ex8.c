#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int a[10], b[10], c[10], i,j=0;

    srand (time(NULL));
    printf("Vector a = ");
    for (i=0; i<10; i++){
        a[i] = rand () %100;
        b[9-i] = a[i];
         printf(" %i\t", a[i] );}

    printf("\nVector b = ");
    for (i=0; i<10; i++)
        printf("%i\t", b[i]);




    return 0;
}
