//Program to calculate Area an Volume

#include<iostream>
using namespace std;

class Measure{
	public:
		int height,length,width;

		void setInput(int h, int l, int w)
		{
			height=h;
			length=l;
			width=w;
		}

		int area()
		{
			return length*width;
		}
	
		int volume()
		{
			return length*width*height;
		}

};

int main()
{

Measure obj1,obj2;

obj1.setInput(10,20,30);
obj2.setInput(40,50,10);

cout << "Area of object 1: " << obj1.area() << endl;
cout << "Volume of object 1: " << obj1.volume() << endl;

cout << "\nArea of object 2: " << obj2.area() << endl;
cout << "Volume of object 2: " << obj2.volume() << endl;

return 0;
}
