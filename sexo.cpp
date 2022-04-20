#include<stdio.h>
#include<conio.h>

main(){
	int sexo, homem=0, mulher=0, idadeH, idadeM, totalH=0, totalM=0, media;
	
	for (int x=0; x < 3; x++){
		printf("Informe o sexo");
		printf("\nHomem[1]");
		printf("\nMulher[2]");
		scanf("%i", &sexo);
		
		if (sexo == 1) {
			homem ++;
			printf("Informe a idade:");
			scanf("%i", &idadeH);
			
			totalH = idadeH + totalH;
		}
		
		else {
			mulher ++;
			printf("Informe a idade:");
			scanf("%i", &idadeM);
			
			totalM = idadeM + totalM;
		}
	}
	
	printf("\nA soma de idade entre homens = %i", totalH);
		
	media = totalM / mulher;
		
	printf("\nA media de idade entre mulheres = %i", media);
}
