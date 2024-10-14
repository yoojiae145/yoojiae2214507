#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	int answer = 50;
	int t=0;
	
	do
	{
	printf("Guess a number:");
	scanf("%i", &a);
	t++;
	
	if(a>answer)
		printf("HIGH!\n");
		else if (a<answer)
		printf("LOW!\n");}	
	while (a!=answer);
	
	printf("congratulation! Trials: %i", t );	
	
	return 0;
}
