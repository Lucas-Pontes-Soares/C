#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  leia  15  n�meros  inteiros  e  exiba  na tela  ao  final,  
	o maior n�mero que foi digitado pelo usu�rio.(obrigat�rio o uso de algum la�o de repeti��o)*/
	
	setlocale(LC_ALL, "portuguese");
	int inteiro, maior=0;
	
	for (int x=0; x < 15; x++) {
		printf("Digite um n�mero inteiro: ");
		scanf("%i", &inteiro);
		
		if (inteiro > maior) {
			maior = inteiro;
		}
	}
	
	printf("O maior n�mero digitado foi = %i", maior);
	getch();
}
