#include<iostream>
using namespace std;

class M{
	public:
		void display()
		{
			cout << "Class M" << endl;
		}	
};

class A : public M{
	public:
		void display()
		{
			cout << "Class A" << endl;
		}
};

class B : public M{
	public:
		void display()
		{
			cout << "Class B" << endl;
		}
};

class C : public A, public B{
	public:
		void display()
		{
			cout << "Class C" << endl;
		}
};

int main()
{

C c;
c.display();
c.A::display();
c.B::display();
//c.M::display();	//if not virtual, cannot access
//c.M::display();		//possible if virtual written in A and B
return 0;
}
