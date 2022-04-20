#include <stdio.h>
#include <conio.h>

main(){
	int cont = 1, num, contador = 0;
	
	while (cont <= 50) {
		printf("Informe um numero: ");
		scanf("%i", &num);
		
		if (num >=10 && num <=20) {
			contador ++;
		}
		
		cont ++;
	}
	
	printf("No total de 50 numeros, %i estao entre 10 e 20", contador);
}
