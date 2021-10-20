#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int codiproduto, codipais;
    float peso, pesograma, total, imposto;

    setlocale(LC_ALL, "Portuguese");

    printf("\t\tQuestão 2 - PRODUTO:\n");

    printf("\nDigite o código do produto comprado (1 a 10): ");
    scanf("%i", &codiproduto);
    printf("Digite o código de país de origem (1 a 3): ");
    scanf("%i", &codipais);
    printf("Digite o peso em quilos: ");
    scanf("%f", &peso);



        if(codiproduto == 1 || codiproduto == 2 || codiproduto == 3 || codiproduto == 4){
            pesograma= peso*1000;
            printf("\nProduto convertido em grama %.0f\n", pesograma);
            total = pesograma/10;
            printf("Preço do produto: %.2f\n", total);}

        if(codiproduto == 5 || codiproduto == 6 || codiproduto == 7){
            pesograma= peso*1000;
            printf("\nProduto convertido em grama %.0f\n", pesograma);
            total = pesograma/25;
            printf("Preço do produto: %.2f\n", total);}

        if(codiproduto == 8 || codiproduto == 9 || codiproduto == 10){
            pesograma= peso*1000;
            printf("\nProduto convertido em grama %.0f\n", pesograma);
            total = pesograma/35;
            printf("\nPreço do produto: %.2f", total);}

        if(codipais == 1){
            imposto = total*0;
            printf("\nValor do imposto sobre o produto: %.2f", imposto);
            printf("\nPreço total: %.2f\n", imposto + total);}

        if(codipais == 2){
            imposto = total*0.15;
            printf("\nValor do imposto sobre o produto: %.2f", imposto);
            printf("\nPreço total: %.2f\n",imposto + total);
        }

        if(codipais == 3){
            imposto = total*0.25;
            printf("\nValor do imposto sobre o produto: %.2f", imposto);
            printf("\nPreço total: %.2f\n", imposto + total);}


    return 0;
}
