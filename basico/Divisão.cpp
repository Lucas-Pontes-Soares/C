//Biblioteca
#include<stdio.h>
#include<conio.h>

main(){
	float num1, num2, divisao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	divisao = num1 / num2;
	
	printf("Valor da divis�o: %.2f", divisao); //".2" o n�mero de casas decimais
	
	getch();	
	
}
