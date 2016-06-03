#include <stdio.h>
#include <math.h>

int main (){
    double a, b, c, qtd;

    while (scanf ("%lf %lf %lf", &a, &b, &c) != EOF){
        qtd = 0;
        qtd = 5 * ((tan(a * (3.141592654/180)) * b) + c);
        printf ("%.2f\n", qtd);   
    }
    return 0;
}
