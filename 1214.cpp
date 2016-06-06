#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main (){

    int c, n, notas, i, j, soma, media_acima, alunos_acima;
    double media, porcentagem_alunos;

    scanf ("%d", &c);

   for (i = 0; i < c; i++ ){
        scanf ("%d", &n);
        
        soma = 0, media = 0;

        vector <int> N;

        for (j = 0; j < n; j++){
            scanf ("%d", &notas);

            N.push_back(notas);

            soma += notas;
            
        }
        media = soma/n;

        media_acima = 0, alunos_acima = 0, porcentagem_alunos = 0;

        for (j = 0; j < n; j++){
            if (N[j] > media){
               alunos_acima += 1;
            }
        }
        porcentagem_alunos = (double)(alunos_acima*100)/n;
             
       
        printf ("%.3f%%\n", porcentagem_alunos);
    }
    

    return 0;
}
