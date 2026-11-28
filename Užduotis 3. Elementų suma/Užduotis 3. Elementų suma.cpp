#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n, s = 0;
	int arr[10];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		s += arr[i];
	}

	cout << s;

	return 0;
}
