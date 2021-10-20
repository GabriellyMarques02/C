#include <stdio.h>
#include<locale.h>
//#include <string.h>

int main(){

    char str[100];
    int i;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: "); gets(str);

    for(i=0; str[i]!='\0'; i++){
       if(str[i]!=' ')
          printf("%c\n", str[i]); //printando por caracter
       else
          printf("\n");

      }









    return 0;
}
