#include <iostream>
using namespace std;

int main()
{
	int m, n;
	cout << "please enter n:";
	cin >> n;
	cout << "please enter m:";
	cin >> m;
	for (int i = 0;i < n;i++)
	{
		for (int j = 0;j < m;j++)
		{
			if (j % 2 == 0)
			{
				cout << "*";
			}
			else
			{
				cout << "#";
			}
		}
		cout << endl;
	}
}