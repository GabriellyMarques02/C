#include <stdio.h>

int main(){

    int formapag;
    float valcar;

    printf("Digite o valor do carro: ");
    scanf("%f", &valcar);

    printf("Qual é a forma de pagamento?\n 1 - CARTAO\n 2 - A VISTA\n");
    scanf("%d", &formapag);

    if(formapag == 1){
        printf("\nValores da parcelas:\n");
        printf("3x - %.2f\n", (valcar * 0.03)+ valcar);
        printf("18x - %.2f\n", (valcar * 0.18)+ valcar);
        printf("36x - %.2f\n", (valcar * 0.36)+ valcar);
    }

    if(formapag == 2){

        printf("Valor a vista: %2.f\n", valcar - (valcar * 0.20));
    }

    return 0;
}
