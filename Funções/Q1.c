#include <stdio.h>


int main(){
    int num, verif;

    printf("Digite um numero: ");
    scanf("%d", &num);

    //verif= parImpar(num);

    if(parImpar(num) == 0)
        printf("\nNum par");

    if(parImpar(num) == 1)
        printf("\nNum impar");


    return 0;
}

int parImpar(int a){

    if(a % 2 == 0 && a!=0)
        return 0;

    else if(a % 2 == 1)
        return 1;

}
