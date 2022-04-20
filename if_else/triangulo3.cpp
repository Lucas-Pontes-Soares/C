#include <stdio.h>
#include<conio.h>

main(){
	/*
	trinagulo escaleno = todos os lados diferentes
	triangulo isósceles =  dois lados iguais
	triango equilátero = todos os lados iguais
	*/
	
	float lado1, lado2, lado3;
	
	printf("Informe o primeiro lado do triangulo: ");
	scanf("%f", &lado1);
	
	printf("Informe o segundo lado do triangulo: ");
	scanf("%f", &lado2);
	
	printf("Informe o terceiro lado do triangulo: ");
	scanf("%f", &lado3);
	
	if(lado1 == lado2 && lado2 == lado3 && lado1 == lado3){
		printf("Triangulo equilatero = todos os lados iguais");
	}
	
	else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
		printf("Triangulo isosceles = 2 lados iguais");
	}
	
	else{
		printf("Triangulo escaleno = todos os lados diferentes");
	}
	
	getch();
}
