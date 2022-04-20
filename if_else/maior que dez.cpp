#include<stdio.h>
#include<conio.h>

main(){
	
	int num;
	
	printf("Informe um numero diferente de 10: ");
	scanf("%i", &num);
	
	if(num<10){
		printf("Numero menor que 10");
		
	} 
	
	else{
		printf("Numero maior que 10");
	}	
		
	getch();	
}
