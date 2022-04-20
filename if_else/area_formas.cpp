#include<stdio.h>
#include<conio.h>

main(){
	int form;
	float qua1, quaArea, reta1, reta2, retaArea, tri1, tri2, triArea, cir1, cir2, cirArea, los1, los2, losArea;
	
	printf("CALCULADORA DE AREA");
	printf("\n[1]- Quadrado");
	printf("\n[2]- Retangulo");
	printf("\n[3]- Triangulo");
	printf("\n[4]- Circunferencia");
	printf("\n[5]- Losango");
	printf("\nInforme a forma geometrica escolhida: ");
	scanf("%i", &form);
	
	if (form == 1) {
		printf("Informe a medida do 1 lado: ");
		scanf("%f", &qua1);
		
		quaArea = qua1 * qua1;
		
		printf("O resultado da area do quadrado foi: %.2f", quaArea);
		
	}
	
	else if (form == 2) {
		printf("Informe a medida da base: ");
		scanf("%f", &reta1);
		printf("Informe a medida da altura: ");
		scanf("%f", &reta2);
		
		retaArea = reta1 * reta2;
		
		printf("O resultado da area do retangulo foi: %.2f", retaArea);
	}
	
	else if (form == 3) {
		printf("Informe a base: ");
		scanf("%f", &tri1);
		printf("Informe a altura: ");
		scanf("%f", &tri2);
		
		triArea = (tri1 * tri2) / 2;
		
		printf("O resultado da area do triangulo foi: %.2f", triArea);
	}
	
	else if (form == 4) {
		printf("Informe o raio: ");
		scanf("%f", &cir1);
		printf("Informe o valor para PI: ");
		scanf("%f", &cir2);
		
		cirArea = (cir1 * cir1) * cir2;
		
		printf("O resultado da area da circunferencia foi: %.2f", cirArea);
	}
	
	else if (form == 5) {
		printf("Informe diagonal maior: ");
		scanf("%f", &los1);
		printf("Informe diagonal menor ");
		scanf("%f", &los2);
		
		losArea = (los1 * los2) / 2;
		
		printf("O resultado da area do losango foi: %.2f", losArea);
	}
	
	else {
		printf("Forma Geometrica invalida!!!");
	}
	
	getch();
}
