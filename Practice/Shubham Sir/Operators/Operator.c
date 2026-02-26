#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y;
	
	int sum;
	
	printf("Enter your X : ");
	scanf("%d",&x);
	printf("Enter your Y : ");
	scanf("%d",&y);
	
	sum = x + y;
	printf("\nSum : %d",sum);
	printf("\nSub : %d",x-y);
	printf("\nmul : %d",x*y);
	printf("\ndiv : %d",x/y);
	
	getch();
}
