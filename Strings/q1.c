#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(){

    char s, str[20];
    int i, q = 0;

    printf("Digite uma string: "); gets(str);
    printf("Digite um caracter: "); s=getchar();


    for(i=0; str[i]!='\0'; i++){
            if(str[i]==s){
                q+=1;
            }

    }
    printf("\n\tCaracter\t%c\taparece %i vezes\n", s, q);






    return 0;
}



