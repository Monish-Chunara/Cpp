#include<iostream>
using namespace std;

class ABC{
	public:
		void display()
		{
			cout << "This is the parent class" <<endl;
		}
};

class XYZ : public ABC{
	public:
		void display()
		{
			cout << "This is the child class" <<endl;
		}
};

int main()
{
XYZ x;
x.display();		//display of XYZ class is invoked
x.ABC::display();	//display of ABC class is invoked

return 0;
}
