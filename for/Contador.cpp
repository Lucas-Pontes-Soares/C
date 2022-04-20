#include<conio.h>
#include<stdio.h>

main(){
	
	int soma=0;
	
	for(int cont; cont <=50; cont++){
		printf("\n%i", cont);
		soma = cont + soma;
	}
	
	printf("\nSoma = %i", soma);
}
