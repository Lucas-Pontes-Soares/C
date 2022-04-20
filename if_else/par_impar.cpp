#include<stdio.h>
#include<conio.h>

main(){
	
	int num;
	
	printf("Informe um numero: ");
	scanf("%i", &num);
	
	if(num % 2 == 0){
		printf("O numero digitado = par");
	}
	else{
		printf("O numero digitado = impar");
	}
	
	
	getch();
}
