/*
	if : codition 
	only for true output
	
	if(codition){
		...code;
	}
*/

#include<stdio.h>
#include<conio.h>

void main(){
	
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Age : %d",age);
	
	if(age >= 18){
		printf("\nAge is Allow");
}

//	if(age <= 18){
//		printf("\nAge is not allow %d ",age);
//	}
//	
	getch();
}
