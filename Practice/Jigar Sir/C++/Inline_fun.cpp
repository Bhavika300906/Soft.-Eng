#include <iostream>
#include <conio.h>
using namespace std;

inline int sum(int a,int b)
{
	return a+b;
}
inline int sub(int a,int b)
{
	return a-b;
}
inline int mul(int a,int b)
{
	return a*b;
}
int main()
{
	int x,y;
	//clrscr
	cout<<"\nEnter Value :";
	cin>>x;
	cout<<"Enter Value :";
	cin>>y;
	cout<<"\nAddition: "<<sum(x,y);
	cout<<"\nSubtract: "<<sub(x,y);
	cout<<"\nMultiple: "<<mul(x,y);
	getch;
}
