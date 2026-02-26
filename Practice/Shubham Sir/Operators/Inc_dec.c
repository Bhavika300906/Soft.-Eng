/*
	post inc : value++
	pre inc : ++value
	
	post dec : value--
	post dec : --value
	
	++ : 11
	-- : 10
	
*/
#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a = 10;
	printf("A : %d",a);
	a++;//11
	a++;//12
	printf("\nA : %d",a);
	++a; //13
	printf("\nA : %d",a);
	
	printf("\nA : %d",++a); //14
	printf("\nA : %d",a++); // 14 // 15
	printf("\nA : %d",a); //15
	
	printf("\nA : %d",a++); //15 //16
	printf("\nA : %d",++a); //17
	printf("\nA : %d",a++); //17 //18
	printf("\nA : %d",++a); //19
	printf("\nA : %d",a++); //19 // 20
	printf("\nA : %d",a++); //20 //21
	printf("\nA : %d",++a); //22
	printf("\nA : %d",++a); //23
	printf("\nA : %d",a++); //23 // 24
	printf("\nA : %d",++a); //25
	
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",a--);
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",a--);
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",a);
	
	
	
	getch();
}

