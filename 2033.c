#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    double c, i, n, simples, composto, dif;

    while ( scanf ("%lf %lf %lf", &c, &i, &n ) != EOF ){

        simples = 0, composto = 0;

        simples = c * i * n;
        composto = c * (pow(1 + i, n)) - c;
        dif = composto - simples;   

        printf ("DIFERENCA DE VALOR = %.2f\n", dif);
        printf ("JUROS SIMPLES = %.2f\n", simples);
        printf ("JUROS COMPOSTO = %.2f\n", composto);
    }

    return 0;
}
