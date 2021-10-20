#include <stdio.h>

int main (){
    int m[5][5], i, c;

   for(i=0; i<5; i++) {
      for(c=0; c<i; c++){
        printf("%d\t",c);
      }
      printf("\n");
   }


  return 0;


}
