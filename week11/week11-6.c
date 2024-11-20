#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* 한 글자씩 읽고 출력 

 int main(void) {
	FILE*fp=NULL;
	char c;
	fp=fopen("sample.txt", "r");
	if(fp==NULL)
	printf("can't open\n");
	
	while((c=fgetc(fp))!=EOF)
	putchar(c);
	
	fclose(fp);
	return 0;
}
*/

// 한 단어씩 읽고 출력

  int main(void) {
	FILE*fp=NULL;
	char buffer[100];
	
	fp=fopen("sample.txt", "r");
	if(fp==NULL)
	printf("can't open\n");
	
	 while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer); }
    fclose(fp);
    
    return 0;
    }
	

