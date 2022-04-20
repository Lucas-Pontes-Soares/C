#include <stdio.h>

main(){
	float bruto, empre;
	
	printf("Informe o seu salario bruto: ");
	scanf("%f", &bruto);
	printf("Informe a quantida de emprestimo: ");
	scanf("%f", &empre);
	
	printf("Emprestimo sera concedido caso o emprestimo seja menor igual a 30 porcento do salario bruto");
	
	if (empre <= bruto * 30/100){
		printf("\nResultado = Emprestimo pode ser concedido");
	}
	
	else {
		printf("\nResultado = Emprestimo nao pode ser concedido");
	}
}
