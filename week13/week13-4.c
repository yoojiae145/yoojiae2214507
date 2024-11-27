#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct point{
	int x;
	int y;
};

/*
// 구조체 변수 자체를 매개변수로 넘김 
int getArea(struct point p1, struct point p2){
	int length = (p1.x > p2.x) ? (p1.x - p2.x) : (p2.x - p1.x);  
    int width = (p1.y > p2.y) ? (p1.y - p2.y) : (p2.y - p1.y);   
    return length * width;
};

int main(int argc, char *argv[]) {
	struct point p1, p2;
	
	printf("input p1 coordinate(x y):");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate(x y):");
	scanf("%d %d" , &p2.x, &p2.y);
	
	
	int area=getArea(p1, p2);
	printf("Area: %d ", area);
	return 0;
}
*/

//pointer를 넘김
int getArea(struct point *pPtr1, struct point *pPtr2){
	int length = (pPtr1->x > pPtr2->x) ? (pPtr1->x - pPtr2->x) : (pPtr2->x - pPtr1->x);  
    int width = (pPtr1->y > pPtr2->y) ? (pPtr1->y - pPtr2->y) : (pPtr2->y - pPtr1->y);   
    return length * width;
};

int main(int argc, char *argv[]) {
	struct point p1, p2;
	
	printf("input p1 coordinate(x y):");
	scanf("%d %d", &p1.x, &p1.y);
	
	printf("input p2 coordinate(x y):");
	scanf("%d %d" , &p2.x, &p2.y);
	
	
	int area = getArea(&p1, &p2);
	printf("Area: %d ", area);
	return 0;
}
 
