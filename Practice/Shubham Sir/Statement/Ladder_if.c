/* 
	if(codition){
		..code;
	}
	else if(codition){
		...code
	}
	else if(coidtion){
		...code
	}
	else{
		..code;
	}
*/
#include<stdio.h>
#include<conio.h>

void main(){
	
	int marks;
	
	printf("Enter your Marks : ");
	scanf("%d",&marks);
	printf("marks : %d",marks);
	
	if(marks > 100 || marks < 0){
		printf("\nmarks are invalid");
	}
	else if(marks >= 85 && marks<=100){
		printf("\nA grade Students..");
	}
	else if(marks >= 70 && marks < 85){
		printf("\nB grade Students..");
	}
	else if(marks < 70 && marks >=65){
		printf("\nC grade Students..");
	}
	else if(marks <65 && marks>= 45){
		printf("\nD grade Students..");
	}
	else{
		printf("\nFail Student..");
	}
	
	getch();
}







