#include<stdio.h>

#define sal 1000

int main(){
    float au,i, aco;

    printf("SALARIO: ");

    au = sal + (sal*0.15);
    printf("SALARIO 2006: %.2f\n", au);

    for(i=2007; i<=2020; i++){
         au= sal+((sal*0.15)*2);
         aco+=au;}
         printf("SALARIO ATUAL: %7.2f", aco);







    return 0;
}
