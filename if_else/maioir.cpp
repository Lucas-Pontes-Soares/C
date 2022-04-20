#include <stdio.h>
#include<conio.h>

main(){
	float  num1, num2;
	
	printf("Informe um numero: ");
	scanf("%f", &num1);
	
	printf("Informe um numero: ");
	scanf("%f", &num2);
	
	if(num1 > num2){
		printf("O numero %.2f maior", num1);
		printf("\nO numero %.2f menor", num2);
	}
	
	else {
		printf("O numero %.2f maior", num2);
		printf("\nO numero %.2f menor", num1);
	}
	
	getch();
}
