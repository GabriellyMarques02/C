#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int a[10], b[10], c[10], i;

    srand (time(NULL));
    for (i=0; i<10; i++){
            a[i] = rand () %15;
            b[i] = rand () %15;
            c[i] = a[i] + b[i];
        printf("a[%i] = %3i + b[%i] = %3i == c[%i] = %3i\n", i,a[i],i, b[i],i, c[i]); // usa o 3 para ordenar casas dos números.

    }




    return 0;
}
