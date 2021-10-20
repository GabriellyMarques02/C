#include <stdio.h>
#define K 5

int main(){
    int m[4][4],i,c, mult;

    for(i=0; i<4; i++) //lendo a matriz;
        for(c=0; c<4; c++){
            printf("M[%d][%d]: ", i,c);
            scanf("%d", &m[i][c]);
        }
    for(i=0; i<4; i++) //multiplicando a diagonal por 5
        m[i][i] = m[i][i]*K;

    for(i=0; i<4; i++){ //mostra a matriz multiplicada
         for(c=0; c<4; c++)
            printf("%5d", m[i][c]);

    printf("\n");
    }




    return 0;
}
