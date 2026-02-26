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
class B 
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
class C : public A,public B
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
void main()
{
	B b1;
	//clrscr();
	b1.getA();
	b1.getB();
	b1.getC();
	b1.putA();
	b1.putB();
	b1.putC();
	getch();
}
