#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	char k;
	int sum;
	
	printf("Enter the calculation : ");
	scanf("%i %c %i", &a, &k, &b);

	if (k=='+')
		printf("=%i", a+b);
	else if(k=='*')
		printf("=%i", a*b);
	else if(k=='/')
		printf("=%i", a/b);
	else
		printf("=%i", a-b);
	return 0;
}
