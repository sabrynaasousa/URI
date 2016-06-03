#include <stdio.h>

int main (){

    int n, p, i, soma, nvezes;

    while(scanf ("%d", &n) && n != -1){

        soma = 0, nvezes = 0;
        
        for ( i = 0; i < n; i++ ){
            scanf ("%d", &p);

            soma += p;

            if ( soma%100 == 0 ){
                nvezes += 1;
            }
        }

        printf ("%d\n", nvezes);
    }

    return 0;
}
