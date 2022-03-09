#include<iostream>
using namespace std;

class base{
	int a;
	public:
		void display()
		{
			cout << "Base display" << endl;
		}
};

class derived: public base{
	int b;
	public:
		void display_derived()
		{
			cout << "Derived display " << endl;
		}
};

int main()
{
	base *ptr;
	base b;
	derived d;

	ptr = &b;
	ptr->display();

	ptr = &d;
	ptr->display();
	//ptr->display_derived();

	((derived *)ptr) -> display_derived();
	return 0;
}
