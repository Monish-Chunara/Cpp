#include<iostream>
#include<cmath>

using namespace std;

class Calculator{
	public:
		int input1;
		int input2;
		

		void setInput1(int a)
		{
			input1=a;
		}

		void setInput2(int a,int b)
		{
			input1=a;
			input2=b;
		}

		int add()
		{
			return input1+input2;
		}

		int subtract()
		{
			return input1-input2;
		}

		int multiply()
		{
			return input1*input2;
		}

		float divide()
		{
			return (float)input1/input2;
		}

		int modulo()
		{
			return input1%input2;
		}

		int power()
		{
			return pow(input1,input2);
		}

		int fact()
		{
			int ans=1;
			
			for(int i=2;i<=input1;i++)
				ans=ans*i;
			
			return ans;
		}
};

int main()
{
	Calculator obj1;
	int n1,n2,choice;

	do
	{
		cout << "\n\nMenu\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulo\n6. x^y\n7. Factorial\n8. Exit\nChoice: ";
		cin >> choice;

		switch(choice)
		{
			case 1: cout<<"\nEnter two numbers: ";
				cin >> n1 >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " + " << obj1.input2 << " = " << obj1.add();
				break;

			case 2: cout<<"\nEnter two numbers: ";
				cin >> n1 >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " - " << obj1.input2 << " = " << obj1.subtract();
				break;

			case 3: cout<<"\nEnter two numbers: ";
				cin >> n1 >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " * " << obj1.input2 << " = " << obj1.multiply();
				break;

			case 4: cout<<"\nEnter two numbers: ";
				cin >> n1 >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " / " << obj1.input2 << " = " << obj1.divide();
				break;

			case 5: cout<<"\nEnter two numbers: ";
				cin >> n1 >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " % " << obj1.input2 << " = " << obj1.modulo();
				break;

			case 6: cout<<"\nEnter x: ";
				cin >> n1;
				cout<<"Enter y: ";
				cin >> n2;
				obj1.setInput2(n1,n2);
				cout << "\n" << obj1.input1 << " ^ " << obj1.input2 << " = " << obj1.power();
				break;

			case 7: cout<<"\nEnter the number: ";
				cin >> n1;
				obj1.setInput1(n1);
				cout << "\n" << obj1.input1 << "!" << " = " << obj1.fact();
				break;

			case 8: cout<<"\n";
				break;

			default:cout << "\nInvalid Choice\n";
				break;
		}

	}while(choice!=8);
}
