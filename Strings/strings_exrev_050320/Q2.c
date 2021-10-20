#include <stdio.h>
#include <locale.h>
#include <ctype.h>


int main(){

    char str[100];
    int i;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite uma string: "); gets(str);

     for(i=0; str[i]!='\0'; i++){
       if(i==0 && str[i]!=' ')
          str[i] = toupper(str[i]);

       if(str[i]==' ')
          str[i+1] = toupper(str[i+1]);}

       for(i=0; str[i]!='\0'; i++)
          printf("%c", str[i]); //printando por caracter}






    return 0;
}
