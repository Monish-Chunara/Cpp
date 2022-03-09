#include<iostream>
using namespace std;

class Base{
	int x;
	public:
		Base()
		{
			cout << "Base default constructor" << endl;
		}

		Base(int j)
		{
			cout << "Base parameterized constructor" << endl;
		}
};

class Derived : public Base{
	int y;
	public:
		Derived()
		{
			cout << "Derived default constructor" << endl;
		}

		Derived(int i)
		{
			cout << "Derived parameterized constructor" << endl;
		}
};

int main()
{
Base b1;
Base b2(20);
Derived d1;		//First base's default then derived's default
Derived d2(10);		//First base's default then derived's parameterized
return 0;
}
