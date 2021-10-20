#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
    int a[10],i, menor,imenor, mult;

    srand(time(NULL));
    setlocale(LC_ALL, "Portuguese");

    printf("\t\tQuestão 1 - CONSUMO DE 10 CARROS:\n");

    for(i=0; i<10; i++){
        a[i] = 2 + rand () % 15;
        printf("\nConsumo carro %i = %i\t", i, a[i]);

        if(a[i] < menor){
            menor=a[i];
            imenor=i;}

        }

    printf("\n\n\tO carro %i é o mais econômico com %i KM por litro\n", imenor, menor);

     printf("\n Vezes uma distância de 1000km: \n");
    for(i=0; i<10; i++){
        mult = a[i] * 1000;
        printf("\nO carro %i consome %i litros.\n", i, mult);}

         return 0;
}
