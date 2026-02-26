#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,c;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	printf("\nEnter C: ");
	scanf("%d",&c);
	
	if (a>b)
	{
		if(a>c)
		{
			printf("\nA is Max");
			
		}
		else
		{
			printf("\nC is Max");
		}
	}
	else if(b>c)
	{
		printf("\nB is Max");
	}
	else
	{
		printf("\nC is Max");
	}
	
	getch();
}
