#include <stdio.h>

int main(){
        int i, c;
        float m[3][5] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

   for(i=0; i<3; i++){
       for(c=0; c<5; c++)
        printf("%7.0f", m[i][c]);

        printf("\n");
      }
    return 0;
}
