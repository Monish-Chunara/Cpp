//Program to demonstrate the concept of pointer to class members for array of objects and pointer to a derived class

#include<iostream>
using namespace std;

class student{
	int marks;
	char name[20];
	
	public:
		int rollNo;
		
		void getData()
		{
			cout << "\nEnter the student name : ";
			cin >> name;

			cout << "Enter the student roll number: ";
			cin >> rollNo;

			cout << "Enter the student's marks: ";
			cin >> marks;
		}

		void printData()
		{
			cout << "\nStudent Name: " << name << endl;
			cout << "Roll Number: " << rollNo << endl;
			cout << "Marks: " << marks << endl;
		}
};

class EC_student : public student{
	char domain[10];
	public:
		void getDomain()
		{
			cout << "Enter your domain: ";
			cin >> domain;
		}

		void printDomain()
		{
			cout << "Roll No. " << rollNo << " is in " << domain << " domain." << endl;
		}
		
};

int main()
{
	student s[3];
	student *ptr;

	ptr = s;	//ptr = &s[0];

	for(int i=0; i<3; i++)
	{
		cout << "\nFor student " << i+1 << " : " << endl;
		(ptr+i)->getData();
	}

	cout << "\n----------------------------------" << endl;
	for(int i=0; i<3; i++)
	{
		cout << "\nStudent " << i+1 << " Information: " << endl;
		(ptr+i)->printData();
	}

	EC_student e;
	EC_student *eptr;
	
	eptr = &e;

	cout << "\n\nFor EC student " << " : " << endl;
	eptr->getData();
	eptr->getDomain();
	cout << "\n\nEC student information" << " : " << endl;
	eptr->printData();
	eptr->printDomain();
	return 0;
}
