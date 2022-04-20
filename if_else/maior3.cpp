#include <stdio.h>
#include <conio.h>

main(){
	float num1, num2, num3;
	
	printf("Informe o primeiro numero: ");
	scanf("%f", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%f", &num2);
	
	printf("Informe o terceiro numero: ");
	scanf("%f", &num3);
	
	if(num1 > num2 && num1 > num3) {
		printf("Numero maior = %.2f", num1);
	}
	
	
	else if(num2 > num1 && num2 > num3){
		printf("Numero maior = %.2f", num2);
	}
	

	else if(num3 > num1 && num3 > num2){
		printf("Numeor maior = %.2f", num3);
	}
	
	getch();
}
