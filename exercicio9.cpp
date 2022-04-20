#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva um  programa  que  leia vários números inteiros e ao  final  informe quantos  números  pares,
	quantos  números  ímpares,  quantos  números  positivos  e  quantos números  negativos
	foram  digitados  pelo  usuário.O  programa  só  deve  parar  de  rodar quando o usuário responder "S"
	na seguinte pergunta, "Deseja encerrar o programa?". */
		 
	setlocale(LC_ALL, "portuguese");
	int num, pares, impares, positivos, negativos;
	char continuar='n';
	
	for (int x=0; continuar == 'n'; x++){
		printf("Digite um número:");
		scanf("%i", &num);
		
		if (num % 2 == 0) {
			pares ++;
		}
		
		else if (num % 3 != 0) {
			impares ++;
		}
		
		if (num >= 0) {
			positivos ++;
		}
		
		else if (num < 0) {
			negativos ++;
		}
		
		printf("\nDeseja encerrar o programa? s ou n: ");
		scanf("%s", &continuar);
	}
		printf("\nQuantidade de número pares = %i", pares);
		printf("\nQuantidade de número ímpares = %i", impares);
		printf("\nQuantidade de números positivos = %i", positivos);
		printf("\nQuantidade de números negativos = %i", negativos);
		
	getch();
}
