//Program to verify the Access modes and Access modifiers while inheriting

#include<iostream>
using namespace std;

class Person
{
	public:
		int a1;
		void func1()
		{
			cout << "inside public" << endl;
		}

	private:
		int a2;
		void func2()
		{
			cout << "inside private" << endl;
		}

	protected:
		int a3;
		void func3()
		{
			cout << "inside protected" << endl;
		}
};

class PublicDoctor : public Person
{
	public:
		int b1;
		
		void func4()
		{
			func1();
			//func2();	//error
			func3();
			cout << "Publically Derived class function" << endl;
		}
};

class PrivateDoctor : private Person
{
	public:
		int c1;
		
		void func5()
		{
			func1();
			//func2();	//error
			func3();	
			cout << "Privately Derived class function" << endl;
		}
};

class ProtectedDoctor : protected Person
{
	public:
		int d1;
		
		void func6()
		{
			func1();
			//func2();	//error
			func3();
			cout << "Protectedly Derived class function" << endl;
		}
};

int main()
{
	PublicDoctor pd1;
	PrivateDoctor pd2;
	ProtectedDoctor pd3;

	pd1.func1();
	cout << "a1: " << pd1.a1 << endl;
	//pd1.func2();	//error
	cout << "a2: " << pd1.a2 << endl;	//error
	//pd1.func3();	//error
	cout << "a3: " << pd1.a3 << endl;	//error
	pd1.func4();

	//pd2.func1();	//error
	cout << "a1: " << pd2.a1 << endl;	//error
	//pd2.func2();	//error
	cout << "a2: " << pd2.a2 << endl;	//error
	//pd2.func3();	//error
	cout << "a3: " << pd2.a3 << endl;	//error
	pd2.func5();

	//pd3.func1();	//error
	cout << "a1: " << pd3.a1 << endl;	//error
	//pd3.func2();	//error
	cout << "a2: " << pd3.a2 << endl;	//error
	//pd3.func3();	//error
	cout << "a3: " << pd3.a3 << endl;	//error
	pd3.func6();

	return 0;
}
