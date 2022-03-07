//Program to use multi level inheritance

#include<iostream>
using namespace std;

class Person
{
	public:
		string name;
		int age, weight, height=6;
		
		void eat()
		{
			cout << name << " Eats" <<endl;
		}

		void walk()
		{
			cout << name << " Walks" <<endl;
		}
	
		void talk()
		{
			cout << name << " Talks" <<endl;
		}

		void printHeight()
		{
			cout << name << " has height " << height << endl;
		}
 
};

class Doctor : public Person
{
	public:
		string degree;

		void diagnose()
		{
			cout << name << " " << degree << " Diagnoses" <<endl;
		}
};

class Surgeon : public Doctor
{
	public:
		string specialization;

		void operation()
		{
			cout << name << " " << degree << " specialization in " << specialization << " does surgery operations" <<endl;
		}
};

int main()
{
	Person p1;
	p1.name.assign("Monish");
	p1.printHeight();
	p1.eat();
	
	Doctor d1;
	d1.age = 40;
	d1.name.assign("Dr. Shah");
	d1.degree.assign("MBBS");
	d1.talk();
	d1.diagnose();
	d1.printHeight();

	Surgeon s1;
	s1.name.assign("Dr. Patil");
	s1.talk();
	s1.degree.assign("MD");
	s1.diagnose();
	s1.specialization.assign(" Brain surgery");
	s1.operation();

	return 0;
}
