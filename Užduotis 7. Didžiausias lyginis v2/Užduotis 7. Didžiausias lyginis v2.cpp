#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n, evenCount = 0;
	int arr[10], evenArr[10];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] % 2 == 0)
		{
			evenArr[evenCount] = arr[i];
			evenCount++;
		}
	}

	if (evenCount > 0)
	{
		int maxEven = evenArr[0];
		for (int i = 0; i < evenCount; i++)
		{
			if (evenArr[i] > maxEven)
			{
				maxEven = evenArr[i];
			}
		}
		cout << maxEven;
	}
	else
	{
		cout << "Ne";
	}

	return 0;
}
