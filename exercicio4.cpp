#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  exiba  na  tela  a  quantidade  de  n�meros  �mpares 
	existentes entre dois n�meros que o usu�rio digitar (testar inclusive os n�meros digitados). */
	
	setlocale(LC_ALL, "portuguese");
	int num1, num2, impar=0;
		
	printf("Digite o primeiro n�mero: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo n�mero: ");
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

	printf("\nA quantidade de n�meros �mpares nesse intervalo = %i", impar);
	getch();
}
