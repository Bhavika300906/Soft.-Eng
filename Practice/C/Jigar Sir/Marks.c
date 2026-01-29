#incude <stdio.h>
#include <conio.h>

void main(){
	int rno,math,sci,eng,total;
	char sname[50]; //[]- limit of characters
	double per;
	printf("\nEnter Student Name: ");
	gets(sname); // Get String when we have grp of character
	scanf("%s",&sname);
	printf("\nEnter Roll No: ");
	scanf("%d",&rno);
	printf("\nEnter Maths");
	scanf("%d",&math);
	printf("\nEnter Eng");
	scanf("%d",&eng);
	printf("\nEnter Sci");
	scanf("%d",&sci);
	total = math+sci+eng;
	per= total/3;
	printf("\nStudent Name: ")
}
