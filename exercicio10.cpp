#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Fa�a  um  programa  que  leia  as  vari�veis C e N,  respectivamente  c�digo  e n�mero de horas
	trabalhadas de um oper�rio. Calcule o sal�rio sabendo-se que ele ganha R$  15,00  por  hora.
	Quando o  n�mero  de  horas excedera  50,  calcule  o  excesso  de pagamento   armazenando-o   na   vari�vel E,
	caso   contr�rio   zerar   tal   vari�vel.   A   hora excedente de trabalho vale R$ 30,00.
	No final do processamento imprimir o sal�rio total e o sal�rio excedente. O  programa s� deve parar
	de rodar  quando o usu�rio responder  "S"  na seguinte pergunta, "Deseja encerrar o programa?". */
	
	setlocale(LC_ALL, "portuguese");
	int N, E, excesso=0, total;
	char continuar='n';
	
	for (int x=0; continuar == 'n'; x++){
		printf("\nN�mero de horas trabalhadas: ");
		scanf("%i", &N);
		
		if (N > 50){
			excesso = N - 50;
			E = excesso * 30;
		}
		
		else {
			E = 0;
		}
		
		total = ((N - excesso) * 15) + E;
		printf("O sal�rio total = %i", total);
		printf("\nO sal�rio excedente = %i", E);
		printf("\nDeseja encerrar o programa? s ou n: ");
		scanf("%s", &continuar);
	}
	getch();
}
