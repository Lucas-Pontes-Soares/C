#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	int jog1, jog2, cont = 1, win1 = 0, win2 = 0;
	
	while(cont == 1){
	
	printf("\nJogador 1, Faca sua escolha: ");
	printf("\n[1]-Pedra");
	printf("\n[2]-Papel");
	printf("\n[3]-Tesoura");
	printf("\nJogador 1- Digite a opcao desejada: ");
	scanf("%i", &jog1);
	system("cls");
	
	printf("\n\nJogador 2, Faca sua escolha: ");
	printf("\n[1]-Pedra");
	printf("\n[2]-Papel");
	printf("\n[3]-Tesoura");
	printf("\nJogador 2- Digite a opcao desejada: ");
	scanf("%i", &jog2);
	system("cls");
	
	//Jogador 1- Pedra
	if(jog1 == 1){
		if (jog2 == 2){
			printf("\n--Jogador 2 Venceu! Pedra < Papel");
			win2 = win2 + 1;
		}
		else if(jog2 == 3){
			printf("\n--Jogador 1 Venceu! Pedra > Tesoura");
			win1 = win1 + 1;
		}
	}
	
	//Jogador 1- Papel
	if (jog1 == 2){
		if(jog2 == 1){
			printf("\n--Jogador 1 Venceu! Papel > Pedra");
			win1 = win1 + 1;
		}
		else if(jog2 == 3){
			printf("\n--Jogador 2 Venceu! Papel < Tesoura");
			win2 = win2 + 1;
		}
	}
	
	//Jogador 1- Tesoura
	if (jog1 == 3){
		if(jog2 == 1){
			printf("\n--Jogador 2 Venceu! Tesoura < Pedra");
			win2 = win2 + 1;
		}
		else if(jog2 == 2){
			printf("\n--Jogador 1 Venceu! Tesoura > Papel");
			win1 = win1 + 1;
		}
	}
	
	//Empate
	if(jog1 == jog2){
		printf("\n--Jogo Empatado!");
	}
	
	//Repetir
	printf("\n\nDeseja continuar?\n[1]-Sim\n[2]-Nao");
	printf("\nDigite a opcao:");
	scanf("%i", &cont);
	}
	
	//vitorias
	printf("\nVitorias dos jogadores");
	printf("\nJogador 1 = %i", win1);
	printf("\nJogador 2 = %i", win2);
	
	if (win1 > win2) {
		printf("\nJogador 1 GANHOU!");
	}
	
	else if (win1 < win2) {
		printf("\nJogador 2 GANHOU!");
	}
	
	else {
		printf("\nEmpate!");
	}	
	getch();
}
