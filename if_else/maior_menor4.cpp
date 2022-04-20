#include <stdio.h>

main(){
	float num, maior, menor, quant;
	
	num = 0;
	quant = 0;
	
	printf("Informe um numero");
	scanf("%f", &num);
	maior = num;
	menor = num;
	
	while(quant<3){
		printf("Informe um numero");
		scanf("%f", &num);
		
		if (num > maior) {
			maior = num;
		}
		
		else if (num < menor) {
			menor = num;
		}
		
		quant = quant +1;
	}
	
	printf("\nO maior numero digitado foi %.2f", maior);
	printf("\nO menor numero digitado foi %.2f", menor);
}
