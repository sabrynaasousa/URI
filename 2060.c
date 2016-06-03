#include <stdio.h>

int main (){

    int n, num, i, M2 = 0, M3 = 0, M4 = 0, M5 = 0;

    scanf ("%d", &n);

    for ( i = 0; i < n; i++ ){
        scanf ("%d", &num);

        if ( num%2 == 0){
            M2 += 1; 
        }
        if ( num%3 == 0){
            M3 += 1;
        }
        if ( num%4 == 0){
            M4 += 1;
        }
        if ( num%5 == 0){
            M5 += 1;
        }
    }

    
     printf ("%d Multiplo(s) de 2\n", M2);
     printf ("%d Multiplo(s) de 3\n", M3);
     printf ("%d Multiplo(s) de 4\n", M4);
     printf ("%d Multiplo(s) de 5\n", M5);
   
    return 0;
}
