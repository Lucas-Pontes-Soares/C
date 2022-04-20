#include<stdio.h>
#include<conio.h>

main(){
	int num1, num2, soma;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	
	soma = num1 + num2;
	printf("%i",soma);
	
	getch();
}
