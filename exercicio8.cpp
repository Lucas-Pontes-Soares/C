#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  calcule  o  fatorial  de  um  n�mero  informado  pelo usu�rio. */
	
	int x, fat=1, resultado;
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe um n�mero para realizar o fatorial: ");
	scanf("%i", &x);
	
	for (int num; x >= 1; x--){
		resultado = fat * x;
		fat = resultado;
	}
	
	printf("O resultado do fatorail = %i", fat);
	getch();
}
