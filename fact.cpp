#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "please enter number:";
	cin >> a;
	int sum = 1;
	for (int i = 1;sum < a;i++)
	{
		sum = sum * i;
		
	}
	if (sum == a)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}