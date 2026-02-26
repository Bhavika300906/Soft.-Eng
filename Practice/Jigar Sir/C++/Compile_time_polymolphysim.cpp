#include <iostream>
#include <conio.h>
using namespace std;
class Tops
{
	public: 
		void test()
		{
			cout<<"\nTest with no argument";
		}
		void test(int a)
		{
			cout<<"\nTest with 1 argument";
		}
		void test(int a, int b)
		{
			cout<<"\nTest with 2 argument";
		}
		
};
int main()
{
	Tops t1;
	//clrscr
	t1.test(20,30);
	t1.test(20);
	t1.test();
	return 0;
}
