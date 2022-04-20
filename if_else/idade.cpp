#include <stdio.h>
#include<conio.h>

main(){
	int anoatual, anonasc1, anonasc2, idade1, idade2;
	
	printf("Qual o ano atual? ");
	scanf("%i", &anoatual);
	
	printf("Insira o ano de nascimento: ");
	scanf("%i", &anonasc1);
	
	printf("Insira o ano de nascimento: ");
	scanf("%i", &anonasc2);
	
	idade1 = anoatual - anonasc1;
	idade2 = anoatual - anonasc2;
	
	if(idade1 > idade2){
		printf("A primeira pessoa e mais velha = %i anos", idade1);
		printf("\nA segunda pessoa e mais nova = %i anos", idade2);
	}
	else{
		printf("A primeira pessoa e mais nova = %i anos", idade1);
		printf("\nA segunda pessoa e mais velha = %i anos", idade2);
	}
	
	getch();
}
