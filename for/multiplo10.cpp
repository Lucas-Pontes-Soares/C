#include<conio.h>
#include<stdio.h>

main(){
	
	for (int cont=0; cont <=100; cont ++){
		printf("\n%i", cont);
		
		if (cont % 10 == 0){
			printf("\nO numero %i e multiplo de 10", cont);
		}
	}
}
