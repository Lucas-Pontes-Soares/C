#include <stdio.h>
#include <conio.h>
#include <locale.h>

main() {
	/* Escreva um programa que exiba na tela a tabuada de um n�mero que dever� 
	ser informado pelo usu�rio (dever� ser usada qualquer estrutura de repeti��o). */
	
	setlocale(LC_ALL, "portuguese");
	int num, resultado;
	
	printf("Informe o n�mero para a tabuada: ");
	scanf("%i", &num);
	
	for (int x=0; x<=10; x++){
		resultado = num * x;
		printf("\n%i x %i = %i", num, x, resultado);
	}
	
	getch();
}
