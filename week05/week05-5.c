#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int c,d,e,f,g;
	
	printf("Input two integers :");
	scanf("%d %d", &a , &b);
	
	c=a&b;
	d=a|b;
	e=a^b;
	f=a<<1;
	g=a>>1;
	
	printf("& result is %d\n", c);
	printf("| result is %d\n", d);
	printf("^ result is %d\n", e);
	printf("<<1 result is %d\n", f);
	printf(">>1 result is %d\n", g);
	
	return 0;
}
