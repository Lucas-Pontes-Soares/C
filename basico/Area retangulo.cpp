#include<stdio.h>
#include<conio.h>

main(){
	int base, altura;
	float area;
	
	printf("Informe a base do retangulo: ");
	scanf("%i", &base);
	
	printf("Informe a altura do retangulo: ");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("A area do retaungulo: %.2f", area);
	
	getch();
	
}
