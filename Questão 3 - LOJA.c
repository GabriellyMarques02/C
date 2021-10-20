#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

    int codigo;
    float valor, valorT, totalV, totalP, prazo;

    setlocale(LC_ALL, "Portuguese");

    printf("\t\tQuestão 3 - LOJA:\n");

    do{

        printf("\nDigite o código (1 e 2): ");
        scanf("%i", &codigo);
        printf("\nDigite o valor da transação: ");
        scanf("%f", &valor);


        if(codigo == 1)
            totalV = totalV+valor;

        if(codigo == 2){
            prazo = valor/3;
            totalP = totalP+valor;
        }


        valorT = totalV+totalP;


    }while(codigo !=0 && valor != 0);

     printf("\nTotal das compras à vista : %.2f\n", totalV);
     printf("\nTotal das compras a prazo: %.2f\n", totalP);
     printf("\nValor total das compras efetuadas no dia: %.2f\n", valorT);
     printf("\nValor da primeira parcela 1x3: %.2f\n", prazo);

    return 0;
}
