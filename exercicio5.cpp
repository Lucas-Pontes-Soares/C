#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  leia  15  números  inteiros  e  exiba  na tela  ao  final,  
	o maior número que foi digitado pelo usuário.(obrigatório o uso de algum laço de repetição)*/
	
	setlocale(LC_ALL, "portuguese");
	int inteiro, maior=0;
	
	for (int x=0; x < 15; x++) {
		printf("Digite um número inteiro: ");
		scanf("%i", &inteiro);
		
		if (inteiro > maior) {
			maior = inteiro;
		}
	}
	
	printf("O maior número digitado foi = %i", maior);
	getch();
}
