#include<iostream>
using namespace std;

class Base{
	int x=0;
	public:
		Base()
		{
			cout << "Base default constructor" << endl;
		}

		Base(int j)
		{
			x=j;
			cout << "Base parameterized constructor" << endl;
		}

		~Base()
		{
			cout << "Base destructor : " << x << endl;
		}
};

class Derived : public Base{
	int y=1;
	public:
		Derived()
		{
			cout << "Derived default constructor" << endl;
		}

		Derived(int i)
		{	
			y=i;
			cout << "Derived parameterized constructor" << endl;
		}

		~Derived()
		{
			cout << "Derived destructor : " << y << endl;
		}
};

int main()
{

cout << "For Base Class objects:" << endl;
Base b1;
Base b2(20);

cout << "\nFor Derived Class objects:" << endl;
Derived d1;		//First base's default then derived's default
Derived d2(10);		//First base's default then derived's parameterized

cout << endl;
return 0;
}
