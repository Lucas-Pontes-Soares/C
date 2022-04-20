#include<stdio.h>
#include<conio.h>

main(){
	int conv;
	float cels, kel, fah;
	
	printf("CALCULADORA CONVERSORA TEMPERATURA");
	printf("\n[1]- Celsius para Fahrenheit");
	printf("\n[2]- Fahrenheit para Celsius");
	printf("\n[3]- Celsius para Kelvin");
	printf("\n[4]- Kelvin para Celsius");
	printf("\n[5]- Kelvin para Fahrenhei");
	printf("\n[6]- Fahrenhei para Kelvin");
	printf("\nInforme a conversao escolhida: ");
	scanf("%i", &conv);
	
	if (conv == 1) {
		printf("Informe o Celsius: ");
		scanf("%f", &cels);
		
		fah = (cels * 9/5) + 32;
		
		printf("A conversao resultou em: %.2f Fahrenheit", fah);
	}
	
	else if (conv == 2) {
		printf("Informe o Fahrenheit: ");
		scanf("%f", &fah);
		
		cels = (fah - 32) * 5/9;
		
		printf("A coversao resultou em: %.2f Celsius", cels);
	}
	
	else if (conv == 3) {
		printf("Informe o Celsius: ");
		scanf("%f", &cels);
		
		kel = cels + 273.15;
		
		printf("A conversao resultou em %.2f Kelvin", kel);
	}
	
	else if (conv == 4) {
		printf("Informe o Kelvin: ");
		scanf("%f", &kel);
		
		cels = kel - 273.15;
		
		printf("A conversao resultou em %.2f Celsius", cels);
	}
	
	else if (conv == 5) {
		printf("Informe o Kelvin: ");
		scanf("%f", &kel);
		
		fah = (kel - 273.15) * 9/5 + 32;
		
		printf("A conversao resultou em %.2f Fahrenheit", fah); 
	}
	
	else if (conv == 6) {
		printf("Informe o Fahrenheit: ");
		scanf("%f", &fah);
		
		kel = (fah - 32) * 5/9 + 273.15;
		
		printf("A conversao resultou em %.2f Kelvin", kel);
	}
	
	else {
		printf("Conversao Invalida!!!");
	}
	
	getch();
}
