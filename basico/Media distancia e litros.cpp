#include<stdio.h>
#include<conio.h>

main(){
	float distancia, combustivel, media;
	
	printf("Informe a distacia percorrida em quilometros: ");
	scanf("%f", &distancia);
	
	printf("Informe a quantidade de combustivel gasto em litros: ");
	scanf("%f", &combustivel);
	
	media = distancia / combustivel;
	
	printf("O consumo medio de quilometros por litros foi: %.2f", media);

	
	getch();
}
