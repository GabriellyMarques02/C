#include <stdio.h>

int main (){
    int m[2][2], i, c, n=0;

    for(i=0; i<2; i++)
      for(c=0; c<2; c++){
        scanf("%d", &m[i][c]);
         if(m[i][c] < 0)
            n++;}
     printf("Quantidade de elementos negativos: %d",n);



    return 0;
}
