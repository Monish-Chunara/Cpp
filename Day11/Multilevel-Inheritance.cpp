//Program to verify the use of access modes in Multilevel inheritance

#include<iostream>
using namespace std;

class base{
	protected:
		int i,j;
	public:
		void set(int a, int b)
		{
			i=a;
			j=b;
		}

		void show()
		{
			cout << i << " "  << j <<endl;
		}
};

class derived1 : private base{
	int k;
	public:
		void setk()
		{
			k=i*j;
		}

		void showk()
		{
			cout << k << endl;
		}
};

class derived2 : public derived1{
	int m;
	public:
		void setm()
		{
			//m=i-j;		//error
		}

		void showm()
		{
			cout << m << endl;
		}
};

int main()
{

derived1 ob1;
derived2 ob2;

//ob1.set(1,2);		//error - set() becomes private for derived 1
//ob1.show();		//error - show() becomes private for derived 1
ob1.showk();		//accessible - public in derived 1

//ob2.set(3,4);		//error - set() was private in derived 1
//ob2.show();		//error - show() was private in derived 1
ob2.showk();		//accessible as it was public in derived 1
ob2.showm();		//accessible as its own public method


return 0;
}
