#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c;
	
	printf("분자를 입력하세요 : ");
	scanf("%f", &a);
	
	printf("분모를 입력하세요 : ");
	scanf("%f", &b);
	
	c=a/b;
	
	printf("나누기의 결과는 %f입니다.", c);
	
	return 0;
}
