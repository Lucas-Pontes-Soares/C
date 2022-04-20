#include <stdio.h>
#include <conio.h>
#include <string.h>
#define t 10

//nome e a idade de 10 pessoas
//exibir nome e idade da pessoa mais velha

main(){
	char nome[t][10];
	char nomeMaior[10];
	int idade, maior=0;
	
	for (int x=0; x < t; x++){
		printf("Informe o nome da %i pessoa: ", x+1);
		fflush(stdin);
		gets(nome[x]);
		printf("Digite a idade do %s : ", nome[x]);
		scanf("%i", &idade);
		
		if (idade > maior) {
			maior = idade;
			strcpy(nomeMaior, nome[x]); //copia o conteudo do parametro1 para o paramentro0
		}
	}
	
	for (int x=0; x < 1; x++){
		printf("O %s com %i anos = mais velho ", nomeMaior, maior);
	}
}
