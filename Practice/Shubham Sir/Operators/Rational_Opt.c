#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a = 30;
	int b = 20;
	
	int max;
	max = a > b;
	
	printf("Max value : %d",max);
	
	int min;
	min = a < b;
	printf("\nMin value : %d",min);
	
	int Comp;
	
	Comp = a == b;
	
	printf("\nCompare : %d",Comp);
	
	int Equ;
	Equ = a != b;
	printf("\nData : %d",Equ);
	
//	trnary op
	printf((a!=b)?"\ntrue":"\nfalse");
	printf((a==b)?"\ntrue":"\nfalse");
	printf((a>b)?"\ntrue":"\nfalse");
	printf((a<b)?"\ntrue":"\nfalse");
	
	getch();
}
