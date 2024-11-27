#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define STUDENTNUM 4
struct student{
	int ID;
	int score;
};
int main(void) {
	struct student sList[STUDENTNUM];
	
	int i;
	double average=0;
	int highest_ID=0;
	int highest_score=0;
		
	for (i=0; i<STUDENTNUM; i++)
	{
		printf("Input the ID:");
		scanf("%d", &sList[i].ID);
		
		printf("Input the score:");
		scanf("%d", &sList[i].score);

	average += sList[i].score;
	if (sList[i].score > highest_score) {
            highest_score = sList[i].score;
            highest_ID = i;}
	}
	average /= 4;
	
	printf("The average of the score: %f\n", average);
    printf("The highest score- ID: %d, Score: %d\n", sList[highest_ID].ID, highest_score);

	
	return 0;
}
