#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int c,d,e,f,g;
	
	printf("intput two integers : ");
	scanf("%i, %i", &a,&b);
	
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	
	printf("+ result is %i\n", c);
	printf("- result is %i\n", d );
	printf("* result is %i\n", e );
	printf("/ result is %i\n", f );
	printf("%% result is %i\n", g );
	
	return 0;
}
