#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

// 4949955000

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n;
	cin >> n;

	if (n < 3)
	{
		long long first, last, sum = 0;
		first = pow(10, n - 1);
		last = pow(10, n) - 1;

		for (int i = first; i <= last; i++)
		{
			sum += i;
		}
		cout << sum << endl;
	}
	else
	{
		cout << 494;
		for (int i = 0; i < n - 3; i++)
			cout << 9;
		cout << 55;
		for (int i = 0; i < n - 2; i++)
			cout << 0;
	}
}