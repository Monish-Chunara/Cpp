#include<iostream>
using namespace std;

class base{
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

class derived : public base{
	int k;
	public:
		derived(int x)
		{
			k=x;
		}

		void showk()
		{
			cout << k << endl;
		}
};

int main()
{

derived ob(3);
ob.set(1,2);		//accessible as derived as public from base class
ob.show();		//inaccessible as dervied as public from base class
ob.showk();		//accessible


return 0;
}
