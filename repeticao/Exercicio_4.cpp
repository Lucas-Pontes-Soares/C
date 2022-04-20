#include<stdio.h>
#include<conio.h>

main(){
	int num=1, soma=0;
	
	while (num<=100) {
		
		printf("\n%i", num);
		
		if (num%3 == 0){
			printf(" - Multiplo de 3");
			soma = soma + num;
		}
		
		num = num + 1;
	}
	printf("\nSoma dos multiplos de 3 = %i", soma);
	getch();
}
