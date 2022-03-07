/*Task - 

Create a class student that stores roll_no, name. 
Create a class test that stores marks obtained in five subjects. 
Class result derived from student and test contains the total marks and percentage obtained in test. Input and display information of a student. 

*/

#include<iostream>
using namespace std;

class student{
	public:
		int roll_no;
		string name;

		void getData()
		{
			cout << "\nEnter student roll number: ";
			cin >> roll_no;
			cout << "Enter student name: ";
			cin >> name;
		}
};

class test{
	public:
		int marks[5];

		void enterMarks()
		{
			for(int i=0; i<5; i++)
			{
				cout << "Enter marks of subject " << i+1 << " : ";
				cin >> marks[i]; 
			}

		}
};

class result : public student, public test{
	public:
		int totalmarks;
		float percentage;

		void CalculateTotal()
		{
			totalmarks=0;
			for(int i=0; i<5; i++)
			{
				totalmarks += marks[i];
			}
		}

		void CalculatePercentage()
		{
			percentage = ((float)totalmarks/500)*100;
		}
		
		void display()
		{
			CalculateTotal();
			CalculatePercentage();

			cout << "\n\n----------------------------" << endl;
			cout << "    Student Information" << endl;
			cout << "----------------------------";
			cout << "\nName\t    : \t" << name << "\nRoll Number : \t" << roll_no << "\n\nMarks: "<<endl;
			for(int i=0; i<5; i++)
			{
				cout << "Subject " << i+1 << "   : \t" << marks[i] <<endl;
			}
			cout << "\nTotal Marks : \t" << totalmarks << " / 500" << endl;
			cout << "\nPercentage  : \t" << percentage << " %" << endl;
			cout << "----------------------------" << endl;
		}
};

int main()
{
	result student1;
	student1.getData();		//inherited method from student class

	//Inputting marks
	cout << "\nFor student - " << student1.name << ", Roll No. " << student1.roll_no << " : " << endl;
	student1.enterMarks();		//inherited method from test class

	//Displaying student information
	student1.display();		//own method
	
	return 0;
}
