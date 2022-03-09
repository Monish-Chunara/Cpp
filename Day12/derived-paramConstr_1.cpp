#include<iostream>
using namespace std;

class base1{
	private:
		void display()
		{

		}
	protected:
		int i;
	public:
		base1()
		{
			cout << "Base1 default constructor" << endl;
		}

		base1(int x)
		{
			i=x;
			cout << "Base1 parameterized constructor" << endl;
		}

		~base1()
		{
			cout << "Destructor of base1" << endl;
		}
};

class base2{
	protected:
		int k;
	public:
		base2()
		{
			cout << "Base2 default constructor" << endl;
		}

		base2(int x)
		{
			k=x;
			cout << "Base2 parameterized constructor" << endl;
		}

		~base2()
		{
			cout << "Destructor of base2" << endl;
		}
};

//if virtual public base2 is written -> first base2 constructor is called then base1 constructor
//hence virtual has precedence
class derived : private base1, public base2{
	int j;
	public:
		derived()
		{
			cout << "Derived default constructor" << endl;
		}

		derived(int x, int y, int z) : base1(y), base2(z)
		{
			j=x;
			cout << "Derived parameterized constructor" << endl;
		}

		~derived()
		{
			cout << "Destructor of derived" << endl;
		}

		void show()
		{
			//display();
			cout << i << " " << j << " " << k << endl;
		}
};

int main()
{
	derived d1(10,20,30);
	d1.show();
	return 0;
}
