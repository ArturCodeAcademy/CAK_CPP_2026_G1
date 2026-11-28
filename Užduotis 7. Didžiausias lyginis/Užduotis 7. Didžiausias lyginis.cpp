#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n;
	int arr[10];

	bool hasEven = false;
	int maxEven = 0;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			if (arr[i] > maxEven || !hasEven)
			{
				maxEven = arr[i];
				hasEven = true;
			}
		}
	}

	if (hasEven)
	{
		cout << maxEven;
	}
	else
	{
		cout << "Ne";
	}

	return 0;
}
