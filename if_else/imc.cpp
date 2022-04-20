#include <stdio.h>

main(){
	float alt, peso, imc;
	
	printf("Insira sua altura: ");
	scanf("%f", &alt);
	
	printf("Insira seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (alt * alt);
	
	if (imc < 20){
		printf("%.2f", imc);
		printf("\nPuro osso");
	}
	
	else if(imc >= 20  && imc <25){
		printf("%.2f", imc);
		printf("\nPeso normal");
	}
	
	else if(imc >= 25 && imc <30){
		printf("%.2f", imc);
		printf("\nSobre peso");
	}
	
	else if(imc >=30 && imc <35){
		printf("%.2f", imc);
		printf("\nObeso");
	}
	
	else if(imc >=35 && imc <40){
		printf("%.2f", imc);
		printf("\nObeso morbido");
	}
	
	else {
		printf("%.2f", imc);
		printf("\nDeus te abencoe!");
	}
	

	
}
