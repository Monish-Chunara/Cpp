//Program to use hierarchical inheritance

#include<iostream>
using namespace std;

class Person
{
	int age;
	public:
		string name;
		int weight, height=6;
		
		void eat()
		{
			cout << name << " Eats" <<endl;
		}

		void walk()
		{
			cout << name << " Walks" <<endl;
		}
	
	protected:
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
			talk();
			printHeight();
			cout << name << " " << degree << " Diagnoses" <<endl;
		}
};

class FootBaller : public Person
{
	public:
		int experience;

		void playFootball()
		{
			cout << name << " plays football and has " << experience << " years of experience." <<endl;
		}
};

int main()
{
	Person p1;
	p1.name.assign("Monish");
	//p1.printHeight();
	p1.eat();
	
	Doctor d1;
	//d1.age = 40;
	d1.name.assign("Dr. Shah");
	d1.degree.assign("MBBS");
	//d1.talk();
	d1.diagnose();
	//d1.printHeight();

	FootBaller f1;
	f1.name.assign("Ronaldo");
	f1.experience = 10;
	f1.walk();
	f1.playFootball();
	//f1.printHeight();

	return 0;
}
