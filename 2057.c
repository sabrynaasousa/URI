#include <stdio.h>

int main (){
    int s, t, f, horas = 0;

    scanf ("%d %d %d", &s, &t, &f);

    horas = s + t + f;

    if ( horas > 24 )
        horas  = horas  - 24;

    if ( horas < 0 )
        horas = horas + 24;

    printf ("%d\n", horas);

    return 0;
}
