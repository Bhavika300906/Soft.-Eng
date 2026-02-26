#include <stdio.h>
#include <conio.h>

void main(){
	int a,b,c;

	//clrscr;
	printf("Enter A:");
	scanf("%d",&a);
	printf("Enter B:");
	scanf("%d",&b);
	c = a+b;
	printf("addition of %d + %d = %d", a,b,c);
	getch();
}
