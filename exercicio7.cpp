#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Escreva um programa que exiba todos os n�meros de 1 a 150 e a cada n�mero que form�ltiplo de 10, 
	exiba a mensagem �M�LTIPLO DE 10�.*/
	
	setlocale(LC_ALL, "portuguese");
	for (int x=1; x<=150; x++){
		printf("\n%i", x);
		
		if (x % 10 == 0) {
			printf(" -- M�ltiplo de 10", x);
		}
	}
	
	getch();
}
