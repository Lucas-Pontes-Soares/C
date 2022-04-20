#include <stdio.h>
#include <string.h>

main(){
	char sigla[2];
	
	printf("Informe a sigla do seu estado: ");
	scanf("%s", &sigla);
	
	if (strcmp (sigla, "RJ")==0){
		printf("Voce = carioca");
	}
	
	else if (strcmp (sigla, "SP")==0){
		printf("Voce = paulista");
	}
	
	else if (strcmp (sigla, "MG")==0){
		printf("Voce = mineiro");
	}
	
	else {
		printf("Voce = outros");
	}
}
