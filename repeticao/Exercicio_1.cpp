#include<stdio.h>
#include<conio.h>

main(){
	int num, soma;
	
	num = 1;
	
	while (num <=50){
		printf("\n%i", num);
		
		num = num + 1;
		soma = soma + num;
	}
	
	printf("\nO resultado da soma = %i", soma);
	
	getch();
	
}
