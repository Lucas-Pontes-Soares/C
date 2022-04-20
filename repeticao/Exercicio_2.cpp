#include<stdio.h>
#include<conio.h>

main(){
	int num=0;
	
	while (num<=100) {
		printf("\n%i", num);
		
		if (num%10 == 0) {
			printf("\nO numero %i e multiplo de 10", num);
		}
		
		num = num + 1;
	}
	
	
	
	getch();
}
