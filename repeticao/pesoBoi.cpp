#include<stdio.h>
#include<conio.h>

main(){
	float pesoboi, somapesoboi = 0;
	int controle = 1, contaboi = 0;
	
	while (controle == 1) {
		printf("Digite o peso do boi: ");
		scanf("%f", &pesoboi);
		somapesoboi = somapesoboi + pesoboi;
		contaboi += 1;
		printf("Deseja inserir mais um boi?\n[1]-Sim\n[2]-Nao");
		printf("\nDigite a opcao: ");
		scanf("%i", &controle);
		
		}
		printf("Peso total dos %i bois = %2.f", contaboi, somapesoboi);
		getch();
	}

