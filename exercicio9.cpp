#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva um  programa  que  leia v�rios n�meros inteiros e ao  final  informe quantos  n�meros  pares,
	quantos  n�meros  �mpares,  quantos  n�meros  positivos  e  quantos n�meros  negativos
	foram  digitados  pelo  usu�rio.O  programa  s�  deve  parar  de  rodar quando o usu�rio responder "S"
	na seguinte pergunta, "Deseja encerrar o programa?". */
		 
	setlocale(LC_ALL, "portuguese");
	int num, pares, impares, positivos, negativos;
	char continuar='n';
	
	for (int x=0; continuar == 'n'; x++){
		printf("Digite um n�mero:");
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
		printf("\nQuantidade de n�mero pares = %i", pares);
		printf("\nQuantidade de n�mero �mpares = %i", impares);
		printf("\nQuantidade de n�meros positivos = %i", positivos);
		printf("\nQuantidade de n�meros negativos = %i", negativos);
		
	getch();
}
