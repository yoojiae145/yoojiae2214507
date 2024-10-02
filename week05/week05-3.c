#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	printf("input the second : ");
	scanf("%d, %d", &a);
	
	b=a/60;
	c=a%60;
	
	printf("The time is %d : %d ", b , c );
	
	return 0;
}
