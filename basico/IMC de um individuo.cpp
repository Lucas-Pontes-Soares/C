//Bibliotecas
#include<stdio.h>
#include<conio.h>

main(){
	float peso, altura, imc;
	
	printf("Informe o peso do individuo: ");
	scanf("%f", &peso);
	
	printf("Informe a altura do individuo: ");
	scanf("%f", &altura);
	
	imc = peso / (altura*altura); 
	
	printf("O IMC do individuo: %.2f", imc );
	
	getch();
	
	
}
