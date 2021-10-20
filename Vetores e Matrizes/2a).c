    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>

    int main(){
        int i, j, soma=0, matriz[3][3]; //para fazer multiplicação de diagonal basta colocar soma = 1;


        srand( time( NULL ) );

        printf( "Matriz:\n" );
        for( i = 0; i < 3; i++ ){
            for( j = 0; j < 3; j++ ){
                matriz[i][j] = 5 + rand() % 5;
                printf( "%3d", matriz[i][j] );
                if( i==j ){
                    soma += matriz[i][j]; // e colocar *=;
                }
            }
            printf( "\n" );
        }
        printf( "\nSoma da diagonal principal: %d\n", soma );
        return 0;
    }
