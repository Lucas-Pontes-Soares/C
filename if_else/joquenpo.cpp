#include<stdio.h>
#include<conio.h>

main(){
	int jog1, jog2;
	
	printf("Jogador 1, Faca sua escolha: ");
	printf("\n[1]-Pedra");
	printf("\n[2]-Papel");
	printf("\n[3]-Tesoura");
	printf("\nJogador 1- Digite a opcao desejada: ");
	scanf("%i", &jog1);
	
	printf("\nJogador 2, Faca sua escolha: ");
	printf("\n[1]-Pedra");
	printf("\n[2]-Papel");
	printf("\n[3]-Tesoura");
	printf("\nJogador 2- Digite a opcao desejada: ");
	scanf("%i", &jog2);
	
	//Jogador 1- Pedra
	if(jog1 == 1){
		if (jog2 == 2){
			printf("\nJogador 2 Venceu! Pedra < Papel");
		}
		else if(jog2 == 3){
			printf("\nJogador 1 Venceu! Pedra > Tesoura");
		}
	}
	
	//Jogador 2- Papel
	if (jog1 == 2){
		if(jog2 == 1){
			printf("\nJogador 1 Venceu! Papel > Pedra");
		}
		else if(jog2 == 3){
			printf("\nJogador 2 Venceu! Papel < Tesoura");
		}
	}
	
	//Jogador 3- Tesoura
	if (jog1 == 3){
		if(jog2 == 1){
			printf("\nJogador 2 Venceu! Tesoura < Pedra");
		}
		else if(jog2 == 2){
			printf("\nJogador 1 Venceu! Tesoura > Papel");
		}
	}
	
	//Empate
	if(jog1 == jog2){
		printf("\nJogo Empatado");
	}
	
	getch();
}
