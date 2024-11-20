#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int i;
	int grade[5];
	
	for(i=0; i<5; i++)
	{
		printf("input value - grade[%i]=", i);
		scanf("%d", &grade[i]);
	}
	
	int sum = 0;
    float average;
    
    int *ptr = grade;
	
    for(i = 0; i < 5; i++) {
        printf("grade[%i] = %d\n", i, *(ptr + i));  
        sum += *(ptr + i); 
    }

    average = sum / 5.0;

    printf("\nAverage grade: %.2f\n", average);
    
	return 0;
}
