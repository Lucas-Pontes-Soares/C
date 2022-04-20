#include<stdio.h>
#include<conio.h>

main(){
	int escolher, jog1, jog2, resultado;
	
	printf("Jogador 1- Deseja numero par ou impar?");
	printf(" \n * Numero par digite 1 \n * Numero impar digite 2: ");
	scanf("%i",&escolher);
	
	if (escolher == 1){
		printf("Jogador 1- Voce e par");
		printf("\nJogador 1- Informe um numero escolhido: ");
		scanf("%i", &jog1);
		
		printf("Jogador 2- Voce e impar");
		printf("\nJogador 2- Informe um numero escolhido: ");
		scanf("%i", &jog2);
		
			resultado = jog1 + jog2;
	
			printf("\nO resultado da soma = %i", resultado);
		
			if (resultado % 2 == 0){
				printf("\nSendo um numero par");
				printf("\nGanhador = Jogador 1");
			}
	
			else{
				printf("\nSendo um numero impar");
				printf("\nGanhador = Jogador 2");
			}
	}
	
	else{
		printf("Jogador 1- Voce e impar");
		printf("\nJogador 1- Informe um numero escolhido: ");
		scanf("%i", &jog1);
		
		printf("Jogador 2- Voce e par");
		printf("\nJogador 2- Informe um numero escolhido: ");
		scanf("%i", &jog2);
		
			resultado = jog1 + jog2;
	
			printf("\nO resultado da soma = %i", resultado);
		
			if (resultado % 2 == 0){
				printf("\nSendo um numero par");
				printf("\nGanhador = Jogador 2");
			}
	
			else{
				printf("\nSendo um numero impar");
				printf("\nGanhador = Jogador 1");
			}
	}
	

	
	
	
	
	
}
