#include<conio.h>
#include<stdio.h>

main(){
	
	int num;
	
	printf("Ate qual numero devo realizar a contagem");
	scanf("%i", &num);
	
	// (defini��o; condi��o; incremento)
	for(int x = 0; x<=10; x++){
		printf("%i\n", x);
	}
	
	getch();
}
