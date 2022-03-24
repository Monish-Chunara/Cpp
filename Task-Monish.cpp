//Chunara Monish Siraj

#include<iostream>
#include<vector>
using namespace std;

int maxValue(int a, int b, int c)
{
	if(a > b)
	{
		if(a > c)
			return a;
		else
			return c;
	}
	else
	{
		if(b > c)
			return b;
		else
			return c;
	}

}

int minValue(int a, int b, int c)
{
	if(a < b)
	{
		if(a < c)
			return a;
		else
			return c;
	}
	else
	{
		if(b < c)
			return b;
		else
			return c;
	}

}

int main()
{
	int N, S, value;
	int i;
	int n1, n2, n3;
	
	cout << "Enter the size of queue and size of subset: ";
	cin >> N >> S;
	
	vector<int> Q;
	
	cout << "Enter the values: " << endl;
	for(i=0; i<N; i++)
	{
		cin >> value;
		Q.push_back(value);
	}
	
	cout << "Size = " << Q.size();
	
	cout << "\nMaximum and Minumum values of the subset are as follows: [min, max]" << endl;
	for(i=0; i<=N-S; i++)
	{
		n1 = Q[i];
		n2 = Q[i+1];
		n3 = Q[i+2];
		
		cout << n1 << " " << n2 << " " << n3 << endl;
		
		cout << "Subset " << (i+1) << " : [" << minValue(n1, n2, n3) << "," << maxValue(n1, n2, n3) << "]" << endl;
		
	}
	
	return 0;
}
