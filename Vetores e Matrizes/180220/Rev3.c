#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 int main(){

    int a[5], b[5], c[5],i,j,k, acu;
    for (i=0; i<5; i++){
        for(j=5; j>=0; j--)
            a[i] = rand () %15;
            b[j] = rand () %15;
      printf(" a[%i] = %3i == b[%i] = %3i\n ", i,a[i],j, b[j]);}

   // for(i=0; )
    //printf("Valor total: %3d\n", acu);







    return 0;
 }
