#include <stdio.h>

int main (){

    int  p, j1, j2, r, a, res = 0;

    scanf ("%d %d %d %d %d", &p, &j1, &j2, &r, &a);

    if ( r == 0 && a == 0 ){
        res = (j1 + j2);
        if ( res%2  == 0 && p == 1 ){
            printf ("Jogador 1 ganha!\n");
        }
        else if ( res%2  != 0 && p == 0 ){
            printf ("Jogador 1 ganha!\n");
        }
        else {
            printf ("Jogador 2 ganha!\n");
        }
    }

    if ( r == 1 && a == 0 ){
       printf ("Jogador 1 ganha!\n");
    }

    if ( r == 0 && a == 1 ){
       printf ("Jogador 1 ganha!\n");
    }

    if ( r == 1 && a == 1 ){
       printf ("Jogador 2 ganha!\n");
     
    }
  

    return 0;
}

