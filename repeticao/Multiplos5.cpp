#include <stdio.h>
#include <conio.h>

main(){
	int cont, num;
	
	while (cont < 500){
		
		if (num %5 == 0) {
			printf("\n%i", num);
		}
		
		num ++;
		cont ++;
	}
}
