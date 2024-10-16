#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int sumTwo(int a, int b)
{
	int resultsum;
	resultsum=a+b;
	return resultsum;
}
int square(int n)
{
	int resultsquare;
	resultsquare=n*n;
	return resultsquare;
}
int get_max(int x, int y)
{
	int resultmax;
	if(x>y)
		resultmax=x;
	else
		resultmax=y;
	return resultmax;	
}
	
int main(void) {
	
	int a,b;
	printf("Enter the integers: ");
	scanf("%i %i", &a, &b);
	
	int sum, squareR, max;
	sum=sumTwo(a,b);
	squareR=square(a);
	max=get_max(a,b);
	
	printf("Result-sum: %i, Square: %i, Max: %i", sum, squareR, max);
	return 0;
}
