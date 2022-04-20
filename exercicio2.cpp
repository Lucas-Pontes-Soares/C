#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  exiba  na  tela  em  ordem decrescente,  
	apenas  os números ímpares existentes entre dois números digitados pelo usuário (inclusive eles). */
	
	setlocale(LC_ALL, "portuguese");
	int num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if (num1 > num2) {
		for(int x=num1; x >= num2; x--){
			if (x % 2 != 0) {
				printf("\n%i", x);
			}	
		}
	}
	
	else {
		for(int x=num2; x >= num1; x--){
			if (x % 2 != 0) {
				printf("\n%i", x);
			}	
		}
	}

	getch();
}
