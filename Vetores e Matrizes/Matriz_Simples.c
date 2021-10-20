#include <stdio.h>

int main (){

    int i,c, matriz [4][4];

    for(i = 0; i<=4; i++){
        for(c=0; c<=4; c++){
        printf("Matriz [%d][%d]:\n ", i,c);
        scanf("%d", &matriz[i][c]);
        printf("%d\n", matriz[i][c]); }
    }




    return 0;
}
