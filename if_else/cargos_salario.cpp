#include <stdio.h>

main(){
	int cargo;
	float salario, total;
	
	printf("Cargos");
	printf("\n(1)Tecnico -> + 1,5%");
	printf("\n(2)Gerente -> + 1,3%");
	printf("\n(3)Outro   -> + 1,1%");
	printf("\n\nInforme o numero do seu cargo:");
	scanf("%i", &cargo);
	
	if (cargo == 1 || cargo == 2 || cargo == 3){
		printf("Informe seu salario: ");
		scanf("%f", &salario);
		
		if (cargo == 1) {
			total = salario + (salario * (1.5 / 100));
			printf("Seu salario com acrescimo = %.2f", total);
		}
		
		else if (cargo == 2) {
			total = salario + (salario * (1.3 / 100));
			printf("Seu salario com acrescimo = %.2f", total);
		}
		
		else {
			total = salario + (salario * (1.1 / 100));
			printf("Seu salario com acrescimo = %.2f", total);
		}
		
	}
	
	else {
		printf("Numero de cargo invalido!");
	}
}
