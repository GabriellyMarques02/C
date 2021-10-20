#include <stdio.h>
#include<locale.h>

//contagem de palavras em uma frase

int main(){

     char str[20];
      int i, q = 1;

       setlocale(LC_ALL, "Portuguese");

      printf("Digite uma string: "); gets(str);

      for(i=0; str[i]!='\0'; i++){
            if(str[i] == ' '){ //usuario pode digitar varios espaços, corrigir :)
               q+=1;
              printf("\nNumero de palavras: %i\n", q);
             }
            if(str[1-i] == ' '){
                printf("Digite apenas um espaço\n");
            break;}
             else if(str[i+1] == ' '){
                printf("Digite apenas um espaço\n");
             break;}
      }
      //printf("Numero de palavras: %i\n", q);





    return 0;
}
