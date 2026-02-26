#include <iostream>
#include <conio.h>

class Tops
{
	int num;
	static int count;
	public:
		void val_counter()
		{
			num=++count;
		}
		void obj_counter()
		{
			cout<<"\nObject Count : "<<num;
		}
		static void display()
		{
			cout<<"\nCount: "<<count;
		}
};
int Tops ::count;
int main()
{
	//clrscr();
	Tops t1,t2;
	t1.val_counter();
	t2.val_counter();
	Tops::display();
	Tops t3;
	t3.val_counter();
	Tops::display();
	t1.obj_counter();
	t2.obj_counter();
	t3.obj_counter();
	getch();
	return 0;
}
