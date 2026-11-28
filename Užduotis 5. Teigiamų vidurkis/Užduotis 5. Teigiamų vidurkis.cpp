#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n, s = 0, count = 0;
	int arr[10];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0)
		{
			s += arr[i];
			count++;
		}
	}

	if (count > 0)
	{
		cout << fixed << setprecision(2) << (double)s / count;
	}
	else
	{
		cout << "NO";
	}

	return 0;
}
