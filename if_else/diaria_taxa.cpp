#include<stdio.h>

main(){
	char nome[30];
	int diaria, total;
	
	printf("Informe seu nome: ");
	scanf("%s", &nome);
	
	printf("\nDiaria = 300 + taxa");
	printf("\nDiaria < 15, taxa = 20");
	printf("\nDiaria = 15, taxa = 14");
	printf("\nDiaria > 15, taxa = 12");
	printf("\nInforme a quantidade de diarias: ");
	scanf("%i", &diaria);
	
	printf("%s", nome);
	
	if (diaria < 15){
		total = 300 * diaria + 20;
		printf("\nO valor total = %i", total);
	}
	
	else if (diaria = 15){
		total = 300 * diaria + 14;
		printf("\nO valor total = %i", total);
	}
	
	else if (diaria > 15){
		total = 300 * diaria + 12;
		printf("\nO valor total = %i", total);
	}
}
