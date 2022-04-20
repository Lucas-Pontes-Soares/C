#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  calcule  o  fatorial  de  um  número  informado  pelo usuário. */
	
	int x, fat=1, resultado;
	setlocale(LC_ALL, "portuguese");
	
	printf("Informe um número para realizar o fatorial: ");
	scanf("%i", &x);
	
	for (int num; x >= 1; x--){
		resultado = fat * x;
		fat = resultado;
	}
	
	printf("O resultado do fatorail = %i", fat);
	getch();
}
