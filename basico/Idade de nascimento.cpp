#include<stdio.h>
#include<conio.h>

main(){
	int anonasc, anoatual, idade;
	
	printf("Informe o seu ano de nascimento: ");
	scanf("%i", &anonasc);
	
	printf("Informe o ano atual: ");
	scanf("%i", &anoatual);
	
	idade = anoatual - anonasc;
	
	printf("A sua idade: %i", idade);
	
	getch();
}
