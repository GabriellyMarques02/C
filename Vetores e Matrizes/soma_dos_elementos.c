#include <stdio.h>

int main (){

    int m[3][4], i,c, s=0;

    for(i=0; i<3; i++)
      for(c=0; c<4; c++){
        scanf("%d", &m[i][c]);
        s=s+m[i][c];
        }

        printf("Soma dos elementos: %d", s);




    return 0;
}
