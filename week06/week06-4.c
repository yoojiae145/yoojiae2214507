#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b;
	
	printf("Enter a number: ");
	scanf("%i", &a);
	
	int sum=0;
	
	for (b=1; b<=a; b++ ){
		sum+=b;
	}
	
	printf("The result is %i", sum);
	return 0;
}
