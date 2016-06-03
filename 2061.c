#include <stdio.h>
#include <string.h>

int main (){

    int n, m, i;
    char escolha[10];

    scanf ("%d %d", &n, &m);

    for ( i = 0; i < m; i++ ){

        scanf ("%s", escolha);

        if ( strcmp("fechou", escolha) == 0 ){
            n += 1;
        }
        else if ( strcmp("clicou", escolha) == 0 ){
            n -= 1;
        }

    }

    printf ("%d\n", n );

}
