#include<conio.h>
#include<stdio.h>

main(){
	int inicial, final;
	
	printf("Insira o valor inicial: ");
	scanf("%i", &inicial);
	
	printf("Insira o valor final: ");
	scanf("%i", &final);
	
	if (inicial < final){
	for (int cont=inicial; cont <= final; cont++){
		printf("%i\n", cont);
	}
	}
	
	else {
	for (int cont=final; cont <= inicial; cont++){
		printf("%i\n", cont);
	}
}
}
