#include <iostream>
#include<conio.h>
using namespace std;

class Tops 
{
	public: 
		static int a;
		void getA()
		{
			cout<<"\nEnter A:";
			cin>>a;	
		} 
		void putA()
		{
			cout<<"\nA :"<<a;
		}
		
};
int Tops ::a;
int main()
{
	//clrscr;
	Tops t1,t2,t3;
	t1.getA();
	t2.getA();
	t3.getA();
	
	t1.putA();
	t2.putA();
	t3.putA();
	getch();
	return 0;
}
