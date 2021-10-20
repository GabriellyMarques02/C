#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int a[10], maior = 1, i,im;

    srand (time(NULL));

    printf("Vector a = ");
    for (i=0; i<10; i++){
        a[i] = rand () %50;
        printf(" %i\t", a[i] );

    if(a[i]>maior){
            maior = a[i];
            im = i;}}
    printf("\nMaior = %3i na posicao (desde posicao 0) %i", maior,im);




    return 0;
}
