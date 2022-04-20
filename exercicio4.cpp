#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  exiba  na  tela  a  quantidade  de  números  ímpares 
	existentes entre dois números que o usuário digitar (testar inclusive os números digitados). */
	
	setlocale(LC_ALL, "portuguese");
	int num1, num2, impar=0;
		
	printf("Digite o primeiro número: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &num2);
	
	if (num1 > num2) {
		for(int x=num1; x >= num2; x--){
			if (x % 2 != 0) {
				impar ++;
			}	
		}
	}
	
	else {
		for(int x=num2; x >= num1; x--){
			if (x % 2 != 0) {
				impar ++;
			}	
		}
	}

	printf("\nA quantidade de números ímpares nesse intervalo = %i", impar);
	getch();
}
