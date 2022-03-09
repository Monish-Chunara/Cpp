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

		Derived(int i,int j) : Base(j)
		{
			cout << "Derived parameterized constructor" << endl;
		}
};

int main()
{
Base b1;
Base b2(20);
Derived d1;
Derived d2(10,30);
return 0;
}
