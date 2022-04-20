#include<stdio.h>
#include<conio.h>

main(){
	
	int num=100;
	
	while (num >= 1){
		
		if (num%2 == 0) {
			printf("\n%i", num);
		}
		num = num - 1;
		
	}
	
	getch();
}
