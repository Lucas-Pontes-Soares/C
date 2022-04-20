#include<stdio.h>
#include<conio.h>

main(){
	float num1, num2, soma, subt, divis, mult;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	
	soma = num1 + num2; 
	subt = num1 - num2;
	divis = num1 / num2;
	mult = num1 * num2;
	
	printf("O resultado da soma: %.2f \n", soma); 
	
	printf("O resultado da subtracao: %.2f \n", subt);
	
	printf("O resultado da divisao: %.2f \n", divis);

	printf("O resultado da multiplicacao %.2f", mult);
	
	getch();
}
