#include<stdio.h>
#include<conio.h>

main (){
	float metros, centimetros;
	
	printf("Informe o numero em metros: ");
	scanf("%f", &metros);
	
	centimetros = metros / 100;
	
	printf("O valor da transformacao de metros para centimetros: %.2f", centimetros);
	
		getch();
}
