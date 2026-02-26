// scanf() &varible-name : address of varibale

#include <stdio.h>
#include <conio.h>

int main(){
	
	int a,b;
	printf("Enter your A: ");
	scanf("%d", &a);
	printf("A: %d",a);
	
	printf("\nEnter your B: ");
	scanf("%i",&b);
	printf("B: %i",b);
	
	// Arithmatic OPT
	
	printf("\nsum: %d", a+b);
	printf("\nsub= %i", a-b);
	printf("\nmul: %d", a*b);
	printf("\ndiv= %i", a/b);
	return 0;
}
