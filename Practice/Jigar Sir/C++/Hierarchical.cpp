#include <iostream>
#include <conio.h>
using namespace; 
class A
{
	int a;
	public: void getA()
	{
		cout<<"\nEnter A: ";
		cin>>a;
	}
	void putA()
	{
		cout<<"\nA: " <<a;
	}
};
class B : public A
{
	int b;
	public:
			void getB()
			{
				cout<<"\nEnter B: ";
				cin>>b;
			}
			void putB()
			{
				cout<<"\nB: "<<b;
			}
		
};
class C : public A
{
	int c;
	public: 
		void getC()
			{
				cout<<"\nEnter C: ";
				cin>>c;
			}
			void putC()
			{
				cout<<"\nC: "<<c;
			}
}
class D : public A
{
	int d;
	public: 
		void getD()
			{
				cout<<"\nEnter D: ";
				cin>>d;
			}
			void putD()
			{
				cout<<"\nD: "<<d;
			}
}
void main()
{
	B b1;
	//clrscr();
	b1.getA();
	b1.getB();
	b1.getC();
	b1.getD();
	b1.putA();
	b1.putB();
	b1.putC();
	b1.putD();
	getch();
}
