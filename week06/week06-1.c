#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a;
	printf("Enter an integer: ");
	scanf("%i", &a);
	
	if (a<0)
	printf("This is negative number.");
		else if (a=0)
		printf("This is 0.");
			else 
			printf("This is positive number. ");
	return 0;
}	
