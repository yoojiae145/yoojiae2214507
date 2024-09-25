#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int a, b;

	printf("enter two integers : ");
	scanf("%d, %d", &a, &b);
	
	float c = a;
    float d = b;

    float e = c / d;
   
	printf("%f / %f = %f", c, d, e);

	return 0;
}
