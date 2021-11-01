#include <iostream>
using namespace std;

int main()
{
	int a, b, sum;
	cout << "please enter a :";
	cin >> a;
	cout << "please enter b :";
	cin >> b;
	if (a > b)
	{
		if (a % b == 0)
		{
			cout << a;
	    }
		else
		{
			int sum = b;
			for (int i = 2;sum%a!=0;i++)
			{
				sum=b* i;
				if (sum % a == 0)
				{
					cout << sum;
				}
			}
			
		}
		
	}
	
	if (b > a)
	{
		if (b % a == 0)
		{
			cout << b;
		}
		
		else
		{
			sum = a;
			for ( int i = 2;sum % b != 0;i++)
			{
				sum= a * i;
				if (sum % b == 0)
				{
					cout << sum;
					
				}
			}
			
		}
	
	}
}