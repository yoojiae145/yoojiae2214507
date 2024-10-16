#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int i=1;
	int res=1;
	for(i=1; i<=n; i++){
		res*=i;}
	return res;
}

int combination(int n, int r)
{
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int get_integer(int a)
{
	printf("Enter the value: ");
	scanf("%i", &a);
	return a;
}


int main(void) {
	
	int n, r;
	int result;
	
	n = get_integer(n);
	r = get_integer(r);
	
	result= combination(n,r);

	printf("The result of C(%i, %i) is %i", n, r, result);
	return 0;
}
