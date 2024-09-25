#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c, w;
	int i, h;
	
	printf("enter a character :");
	scanf("%c", &c);
	
	w = c+1;
	i = c;
	h = i+1;
	
	printf("The next character of %c (%i) is %c (%i)", c ,i, w, h);
	return 0;
}
