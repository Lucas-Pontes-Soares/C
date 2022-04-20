#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva um programa que calcule e  exiba a média  de 10 notas digitadas pelo usuário.  
	Considerar  notas  válidas,  somente  valores de 0  (zero) a 10  (dez).  
	Se  o  usuário digitar  algum  valor  inválido,  deverá  ser  exibida  uma  mensagem  informando  o  ocorrido. */
	
	setlocale(LC_ALL, "portuguese");
	float nota, total=0, media;
	
	for (int x=0; x<10; x++){
		printf("\nDigite sua nota: ");
		scanf("%f", &nota);
		
		if (nota <=10 && nota >=0) {
			total = nota + total;	
		}
		
		else {
			printf("\nNota inválida!!");
		}
	}
	
	media = total / 10;
	printf("\nA media das suas notas foi = %.2f", media);
	getch();
}
