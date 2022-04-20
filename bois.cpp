#include<stdio.h>
#include<conio.h>

main(){
	int bois;
	float total, peso, media, arrobas;
	
	printf("Informe uma quantidade de bois: ");
	scanf("%i", &bois);
	
	for (int x=0; x < bois; x++){
		printf("Informe o peso do boi: ");
		scanf("%f", &peso);
		
		total = peso + total;
	}
	
	printf("A soma do pesos de todos os bois = %f", total);
	
	media = total / bois;
	
	printf("\nA média de peso dos bois = %f", media);
	
	arrobas = total / 15;
	
	printf("\nO peso em % = %f", arrobas);
}
