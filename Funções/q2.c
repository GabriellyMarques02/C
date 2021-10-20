#include <stdio.h>

// fazer com 3, sem mexer na sintaxe dela kk
int main(){

    int num1, num2;

    printf("Digite dois numeros: ");
    scanf("%d %d", &num1,&num2);

    printf( "\n O maior numero: %d\n", maiorMenor(num1,num2) );



return 0;
}


int maiorMenor(int a, int b){


    if(a>b)
      return a;

    if(b>a)
       return b;

  }
