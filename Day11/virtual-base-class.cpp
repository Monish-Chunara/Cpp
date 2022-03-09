//Program to use hybrid inheritance

#include<iostream>
using namespace std;

class Car
{
	public:
		
		void display1()
		{
			cout << "Car" << endl;
		}
};

class FuelCar : virtual public Car
{
	public:
		
		void display2()
		{
			cout << "Fuel Car" << endl;
		}
};

class ElectricCar : public virtual Car
{
	public:
		
		void display3()
		{
			cout << "Electric Car" << endl;
		}
};

class HybridCar : public FuelCar, public ElectricCar
{
	public:
		
		void display4()
		{
			display1();
			cout << "Hybrid Car" << endl;
		}
};

int main()
{
	Car C;
	FuelCar F;
	ElectricCar E;
	HybridCar H;

	cout << "Car object:" << endl;
	C.display1();

	cout << "\nFuelCar object:" << endl;
	F.display1();
	F.display2();

	cout << "\nElectricCar object:" << endl;
	E.display1();
	E.display3();

	cout << "\nHybridCar object:" << endl;
	H.display1();
	H.display2();
	H.display3();
	H.display4();
	return 0;
}
