/*
	if(codition){
		..code;
	}
	else{
		..code;
	}
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Age : %d",age);
	
	
	if(age >= 18){
		printf("\nAge is Allow");
	}
	else{
		printf("\nAge is not Allow");
	}
	
	
	getch();
}
