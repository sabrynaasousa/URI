#include <stdio.h>

int main (){

	int N, i;
	char jogador1[100], jogador2[100];
	
	scanf ("%d", &N);

	for ( i = 0; i < N; i++ ){

		scanf ( "%s %s", jogador1, jogador2 );
		
		if ( strcmp(jogador1,"ataque") == 0 && strcmp(jogador2,"pedra") == 0 || strcmp(jogador1,"pedra") == 0 && strcmp(jogador2,"papel") == 0 ||strcmp(jogador1,"ataque") == 0 && strcmp(jogador2,"papel") == 0 )
			printf ( "Jogador 1 venceu\n" );
		else if ( strcmp(jogador2,"ataque") == 0 && strcmp(jogador1,"pedra") == 0 || strcmp(jogador2,"pedra") == 0 && strcmp(jogador1,"papel") == 0 ||strcmp(jogador2,"ataque") == 0 && strcmp(jogador1,"papel") == 0 )
			printf ( "Jogador 2 venceu\n" );
		else if ( strcmp(jogador1,"pedra") == 0 && strcmp(jogador2,"pedra") == 0 )
			printf ( "Sem ganhador\n" );
		else if ( strcmp(jogador1,"ataque") == 0 && strcmp(jogador2,"ataque") == 0 )
			printf ( "Aniquilacao mutua\n" );
		else if ( strcmp(jogador1,"papel") == 0 && strcmp(jogador2,"papel") == 0 )
			printf ( "Ambos venceram\n" );
		else if ( strcmp(jogador1,"pedra") == 0 && strcmp(jogador2,"pedra") == 0 )
			printf ( "Sem ganhador\n" );
		else if ( strcmp(jogador1,"ataque") == 0 && strcmp(jogador2,"ataque") == 0 )
			printf ( "Aniquilacao mutua\n" );

	}
	
	return 0;
}
