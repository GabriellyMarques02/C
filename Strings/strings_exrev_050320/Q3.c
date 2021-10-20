#include <stdio.h>
#include <locale.h>


int main(){ // bug de imprimir o else 5 vezes sem mostra digitar de novo.

    char str[7] = "senha",str2[7];
    int i,q=0;

    setlocale(LC_ALL, "Portuguese");



    do{

        printf("Digite a senha: "); gets(str2);

        for(i=0; str[i]!='\0'; i++){

            if(strcmp(str2,str) == 0){
                printf("Acesso permitido\n");
                break; }
            else
                printf("Acesso negado, tente novamente\n");

            q+=1;

        }

    break;
    }while(1);

    printf("\nNúmero de tentativas: %i", q);


    return 0;
}
