//Program to use multiple inheritance

#include<iostream>
using namespace std;

class Liquid
{
	public:
		int l1;
		
		void flow()
		{
			cout << "Flows" << endl;
		}

	protected:
		void flow_protected()
		{
			cout << "Inside Liquid Protected" << endl;
		}
};

class Fuel
{
	public:
		int f1;
		
		void burn()
		{
			cout << "burns" << endl;
		}
};

class Petrol : public Liquid, public Fuel
{
	public:
		int p1;
		
		void runsVehicle()
		{
			flow_protected();
			cout << "Runs Vehicle" << endl;
		}
};

int main()
{
	Liquid L1;
	Fuel F1;
	Petrol P1;

	cout << "Liquid" << endl;
	L1.l1 = 1;
	L1.flow();

	cout << "\nFuel" << endl;
	F1.f1 = 2;
	F1.burn();

	cout << "\nPetrol" << endl;
	P1.l1 = 1;
	P1.f1 = 2;
	P1.p1 = 3;
	P1.flow();
	P1.burn();
	P1.runsVehicle();

	return 0;
}
