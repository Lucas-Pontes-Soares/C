#include <stdio.h>
#include <conio.h>

main(){

	int sexo, func = 0, mas = 0, fem = 0;
	
	while (func < 10){
		printf("Qual o sexo do funcionario?\n[1]-masculino\n[2]-femenino");
		printf("\nInforme o sexo: ");
		scanf("%i", &sexo);
		
		if (sexo == 1){
			mas ++;
		}
		
		else if (sexo == 2){
			fem ++;
			printf("Entrou");
		}
		
		
		func ++;
	}
	printf("\n=== Funcionarios: ===");
	printf("\nMasculino = %i", mas);
	printf("\nFemenino = %i", fem);
}
