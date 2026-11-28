#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n;
	int arr[10];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << arr[0];

	return 0;
}
