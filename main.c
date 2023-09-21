#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c, d;
	int a, b;
	
	printf("enter character : ");
	scanf("%c", &c);
	
	a = c - '0';
	b = a+1;
	d = b + '0';
	
	printf("the next character of %c (%d) is %c (%d)", c,a,d,b); 
	
	
	
	
	return 0;
}
