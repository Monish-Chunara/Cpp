#include<iostream>
using namespace std;

class A{
	public:
		void display()
		{
			cout << "Class A" << endl;
		}

		void display(int i)
		{
			cout << "Class A " << i << endl;
		}
};

class B : private A{
	public:
		using A::display;	//which out of overloaded
		void display2()
		{
			cout << "Class B" << endl;
		}
};

int main()
{

	B b1;
	b1.display2();
	b1.display();	//A's member function display () is accessible because "using" 				//keyword is used to give public access to it

	b1.display(5);
	return 0;
}
