/*
	switch(choice){
		case 1;
			code;
			break;
		default:
			
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int day;
	printf("Enter your Day number : ");
	scanf("%d",&day);
	printf("day : %d",day);
	
	
	switch(day){
		case 1 : 
			printf("\nMonday..");
			break;
		case 2 :
			printf("\nTuesday");
			break;
		case 3 :
			printf("\nWensday");
			break;
		default :
			printf("\nInvalid Day..");
	}
	
	getch();
}
