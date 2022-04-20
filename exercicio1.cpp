#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	/* Escreva  um  programa  que  exiba  na  tela  em  ordem  crescente,  
	apenas  os números pares existentes de 111 a 2500. */
	
	setlocale(LC_ALL, "portuguese");
	for (int x=111; x <= 2500 && x >= 111; x++){
		
		if (x % 2 == 0) {
			printf("\n%i", x);
		}
	}
	
	getch();
}
