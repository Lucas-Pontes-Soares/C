#include <stdio.h>
#include <conio.h>
#include <locale.h>

main() {
	/* Escreva um programa que exiba na tela a tabuada de um número que deverá 
	ser informado pelo usuário (deverá ser usada qualquer estrutura de repetição). */
	
	setlocale(LC_ALL, "portuguese");
	int num, resultado;
	
	printf("Informe o número para a tabuada: ");
	scanf("%i", &num);
	
	for (int x=0; x<=10; x++){
		resultado = num * x;
		printf("\n%i x %i = %i", num, x, resultado);
	}
	
	getch();
}
