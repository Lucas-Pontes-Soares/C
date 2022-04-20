#include <stdio.h>
#include <conio.h>

main(){
	int num;
	
	while (num < 100) {
		if (num %2 == 0){
			printf("\n%i", num);
		}
		num ++;
	}
}
