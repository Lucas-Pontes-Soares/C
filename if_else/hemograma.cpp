#include <stdio.h>
#include <conio.h>

main (){
	// Observe a imagem abaixoos valores são para verificação de um hemograma. 
	// Desenvolva um programa que informe se os valores do resultado de uma pessoa estão abaixo, 
	// acima ou normais em relação aos valores de referência.
	
	float hema, hemo, hemat, vgm, hgm, chbm, rdw;
	
	printf("Informe o numero de hemacias: ");
	scanf("%f", &hema);
	
	printf("Informe o numero de hemoglobina: ");
	scanf("%f", &hemo);
	
	printf("Informe o numero hematocrito: ");
	scanf("%f", &hemat);
	
	printf("Informe o numero Vol. Glob. Medio (VGM): ");
	scanf("%f", &vgm);
	
	printf("Informe o numero Hem. Glob. Media (HGM): ");
	scanf("%f", &hgm);
	
	printf("Informe o numero C.H Glob. Media (CHBM): ");
	scanf("%f", &chbm);
	
	printf("Informe o numero RDW: ");
	scanf("%f", &rdw);
	
	//hema
	
	if (hema >= 4.5 && hema <= 6) {
		printf("\n* Hemacias = Valores Nomais");
		}
		
	else if (hema < 4.5) {
		printf("\n* Hemacias = Valores Abaixo");
		}
		
	else {
		printf("\n* Hemacias = Valores Acima");
		}
	
	
	//hemo
	
	if (hemo >= 13 && hemo <= 16) {
		printf("\n* Hemoglobina = Valores Nomais");
	}
		else if (hemo < 13) {
			printf("\n* Hemoglobina = Valores Abaixo");
		}
		
		else {
			printf("\n* Hemoglobina = Valores Acima");
		}
	
	
	//hemat
	
	if (hemat >= 38 && hemat <= 50) {
		printf("\n* Hematocrito = Valores Nomais");
}
		else if (hemat < 38) {
			printf("\n* Hematocrito = Valores Abaixo");
		}
		
		else {
			printf("\n* Hematocrito = Valores Acima");
		}
	
	
	//vgm 
	
	if (vgm >= 80 && vgm <= 100) {
		printf("\n* Vol. Glob. Medio = Valores Nomais");
	}
		else if (vgm < 80) {
			printf("\n* Vol. Glob. Medio = Valores Abaixo");
		}
		
		else {
			printf("\n* Vol. Glob. Medio = Valores Acima");
		}
	
	
	//hgm
	
	if (hgm >= 26 && hgm <= 34) {
		printf("\n* Hem. Glob. Media = Valores Nomais");
	}
		else if (hgm < 26) {
			printf("\n* Hem. Glob. Media = Valores Abaixo");
		}
		
		else {
			printf("\n* Hem. Glob. Media = Valores Acima");
		}
	
	
	//chgm
	
	if (chbm >= 31 && chbm <= 36) {
		printf("\n* C.H Glob. Media = Valores Nomais");
}
		else if (chbm < 31) {
			printf("\n* C.H Glob. Media = Valores Abaixo");
		}
		
		else {
			printf("\n* C.H Glob. Media = Valores Acima");
		}
	
	
	//rdw
	
	if (rdw >= 11.5 && rdw <= 15) {,
		printf("\n* RDW = Valores Nomais");
	}
		else if (rdw < 11.5) {
			printf("\n* RDW = Valores Abaixo");
		}
		
		else {
			printf("\n* RDW = Valores Acima");
		}
	
	getch();
}
