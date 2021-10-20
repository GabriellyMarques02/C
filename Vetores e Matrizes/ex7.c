#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){ //pode fazer tambem usando os pares sendo a e os impares sendo b.
    int a[10], b[10], c[20], i,j=0;

    srand (time(NULL));
    for (i=0; i<10; i++){
            a[i] = rand () %100;
            b[i] = rand () %100;

    printf(" a[%i] = %3i == b[%i] = %3i\n ", i,a[i],i, b[i]);}

     for (i=0; i<10; i++){
            c[j] = a[i];
            c[j+1] = b[i];
            j=j+2;}
     printf("\n Vetor = C ");
     for(i=0;i<20;i++)
         printf("%i\t", c[i]);



    return 0;
}
