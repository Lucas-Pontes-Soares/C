#include <stdio.h>
#include <conio.h>

main(){
	char operador;
	float num1, num2, resultado;
	
	printf("_____________");
	printf("\n|Calculadora|");
	printf("\n|___________|");
	printf("\n|Adicao   |+|");
	printf("\n|Subtracao|-|");
	printf("\n|Multiplic|*|");
	printf("\n|Divisao  |/|");
	printf("\n|___________|");
	
	printf("\n\nInforme o sinal de operacao: ");
	scanf("%c", &operador);
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num2);
	
	if (operador == '+' || operador == '-'|| operador == '*'|| operador == '/'){
		
		if (operador == '+'){
			resultado = num1 + num2;
			printf("\nResutado %.2f + %.2f = %.2f", num1, num2, resultado);
		}
	
		else if (operador == '-'){
			resultado = num1 - num2;
			printf("\nResutado %.2f - %.2f = %.2f", num1, num2, resultado);
		}	
	
		else if (operador == '*'){
			resultado = num1 * num2;
			printf("\nResutado %.2f * %.2f = %.2f", num1, num2, resultado);
		}
	
		else {
			resultado = num1 / num2;
			printf("\nResutado %.2f / %.2f = %.2f", num1, num2, resultado);
		}
	}	
	else {
		printf("\nOperador Invalido!");
	}
	
	getch();

	}
