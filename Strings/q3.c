#include <stdio.h>
#include<locale.h>

//contagem de palavras em uma frase

int main(){

     char str[20];
     int i, q=0;

     printf("Digite uma string: "); gets(str);

     for(i=0; str[i]!='\0'; i++){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
               q+=1;
               str[i] = '*';}
               }

      printf("String criptografada: %s\n", str);
      printf("Numero de vogais: %i\n", q);




    return 0;
}
