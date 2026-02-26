//Contrusctor Default 
#include <iostream.h>
#include <conio.h>
class Box
{
	double width.height,depth; //private class
	public: 
	Box()
	{
		cout<<"\nDefault Constructor Called";
		width=3;
		height=4;
		depth=5;
	}
	void volume()
	{
		cout<<"\nVolume : "<<width*height*depth;
	}
	
};
void main()
{
	Box b1;
	b1.volume();
	
}
