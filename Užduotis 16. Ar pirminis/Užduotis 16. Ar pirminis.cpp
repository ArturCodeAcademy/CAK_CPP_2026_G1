#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n;
	cin >> n;

	if (n == 1 || n == 0)
	{
		cout << "NE";
	}
	else
	{
		for (int i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				cout << "NE";
				return 0;
			}
		}

		cout << "TAIP";
	}
}