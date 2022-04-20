#include<stdio.h>
#include<conio.h>

main(){
	int acertos, ques1, ques2, ques3, ques4, ques5, ques6;
	
	printf("*--Quizz sobre HTML--*");
	
	//Questão 1
	
	printf("\n\n1 Questao");
	printf("\nQual a primeira tag em um documento.html?");
	printf("\n[1]- <html>");
	printf("\n[2]- <!DOCTYPE html>");
	printf("\n[3]- <!html>");
	printf("\n[4]- <!html 5>");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques1);
	
	if(ques1 == 2){
		printf("Alternativa correta");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 2");
	}
	
	//Questão 2
	
	printf("\n\n2 Questao");
	printf("\nQual o numero maximo para a tag <h>?");
	printf("\n[1]-Ate h3");
	printf("\n[2]-Ate h4");
	printf("\n[3]-Ate h5");
	printf("\n[4]-Ate h6");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques2);
	
	if(ques2 == 4){
		printf("Alternativa correta!");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 4");
	}
	
	//Questão 3
	
	printf("\n\n3 Questao");
	printf("\nQual a tag para adicionar um paragrafo?");
	printf("\n[1]- <paragraph>");
	printf("\n[2]- <paragrafo>");
	printf("\n[3]- <p>");
	printf("\n[4]- <parag>");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques3);
	
	if(ques3 == 3){
		printf("Alternativa correta!");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 3");
	}
	
	//Questão 4

	printf("\n\n4 Questao");
	printf("\nQual a versao mais recente do HTML?");
	printf("\n[1]- Versao 3");
	printf("\n[2]- Versao 2");
	printf("\n[3]- Versao 4");
	printf("\n[4]- Versao 5");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques4);
	
	if(ques4 == 4){
		printf("Alternativa correta!");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 4");
	}
	
	//Questão 5
	
	printf("\n\n5 Questao");
	printf("\nQual a data de lancamento da primeira versao?");
	printf("\n[1]- 1992");
	printf("\n[2]- 1993");
	printf("\n[3]- 1995");
	printf("\n[4]- 1994");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques5);
	
	if(ques5 == 2){
		printf("Alternativa correta!");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 2");
	}
	
	//Questão 6
	
	printf("\n\n6 Questao");
	printf("\nResponda se a frase e verdadeira ou falsa:");
	printf("\nHTML e um mecanismo para adicionar estilo a um documento web.");
	printf("\n[1]- Verdadeiro");
	printf("\n[2]- Falsa");
	printf("\nInforme a alternativa escolhida: ");
	scanf("%i", &ques6);
	
	if(ques6 == 2){
		printf("Alternativa correta!");
		acertos = acertos + 1;
	}
	
	else{
		printf("Alternativa errada!");
		printf("\nCerta= Alternativa 2");
	}
	
	//Resultado
	
	printf("\n\nFim das questoes!");
	printf("\nSeu resultado: De 6 alternavidas voce teve %i acerto(s)!", acertos);
	
	getch();
	
}
