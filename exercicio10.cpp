#include<stdio.h>
#include<conio.h>
#include <locale.h>

main(){
	/* Faça  um  programa  que  leia  as  variáveis C e N,  respectivamente  código  e número de horas
	trabalhadas de um operário. Calcule o salário sabendo-se que ele ganha R$  15,00  por  hora.
	Quando o  número  de  horas excedera  50,  calcule  o  excesso  de pagamento   armazenando-o   na   variável E,
	caso   contrário   zerar   tal   variável.   A   hora excedente de trabalho vale R$ 30,00.
	No final do processamento imprimir o salário total e o salário excedente. O  programa só deve parar
	de rodar  quando o usuário responder  "S"  na seguinte pergunta, "Deseja encerrar o programa?". */
	
	setlocale(LC_ALL, "portuguese");
	int N, E, excesso=0, total;
	char continuar='n';
	
	for (int x=0; continuar == 'n'; x++){
		printf("\nNúmero de horas trabalhadas: ");
		scanf("%i", &N);
		
		if (N > 50){
			excesso = N - 50;
			E = excesso * 30;
		}
		
		else {
			E = 0;
		}
		
		total = ((N - excesso) * 15) + E;
		printf("O salário total = %i", total);
		printf("\nO salário excedente = %i", E);
		printf("\nDeseja encerrar o programa? s ou n: ");
		scanf("%s", &continuar);
	}
	getch();
}
