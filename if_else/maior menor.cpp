#include<stdio.h>
#include<conio.h>

main(){
		int num1, num2;
		
	printf("Informe um numero: ");
	scanf("%i", &num1);
	
	printf("Informe outro numero: ");
	scanf("%i", &num2);
	
	if(num1>num2){
		printf("O primeiro numero e maior = %i", num1);
		
	}
	else{
		printf("O segundo numero e maior = %i", num2);
	}
	
	getch();
}
