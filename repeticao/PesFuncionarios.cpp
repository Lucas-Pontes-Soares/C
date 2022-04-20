#include <stdio.h>
#include <conio.h>

main(){
	char nome;
	int cont = 0, sexo, civil, idade, maior = 0, mas=0, fem=0, sol=0, cas=0, total = 0, soma, totalSC,  totalHM;
	float porcCAS, porcSOL, porcH, porcM;
	
	while (cont < 3){
		
		printf("\nInforme o nome: ");
		scanf("%s", &nome);
		
		printf("Informe a idade: ");
		scanf("%i", &idade);
		
		if (idade >=18){
			maior ++;
		}
		
		printf("Informe o sexo \n[1]-Masculino \n[2]-Femenino: ");
		scanf("%i", &sexo);
		
		if (sexo == 1){
			mas ++;
		}
		
		else if (sexo == 2){
			fem ++;
		}
		
		printf("Informe o estado civil \n[1]-Solteiro \n[2]-Casado: ");
		scanf("%i", &civil);
		
		if (civil == 1){
			sol ++;
		}
		
		else if (civil == 2){
			cas ++;
			
			total = idade; 
			soma = total + soma;
		}
		
		
		cont ++;
	}
	
	printf("\nMaior de idade %i", maior);
	printf("\nSomada das idades entre casados: %i", soma);
	
	if (cas > sol){
		printf("\nNumero de casados maior que solteiros");
	}
	
	else if (cas < sol){
		printf("\nNumero de casados menor que solteiros");
	}
	
	totalSC = sol + cas;
	porcCAS = (100 * cas) / totalSC;
	porcSOL = (100 * sol) / totalSC;
	
	printf("\nPorcentagem de casados = %f", porcCAS);
	printf("\nPorcentagem de solteiros = %f", porcSOL);
	
	totalHM = mas + fem;
	porcH = (100 * mas) / totalHM;
	porcM = (100 * fem) / totalHM;
	
	printf("\nPorcentagem de homens = %f", porcH);
	printf("\nPorcentagem de mulheres = %f", porcM);
	
}
