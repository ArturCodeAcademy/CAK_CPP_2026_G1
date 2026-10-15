#include <iostream>

using namespace std;

int main()
{
	string number;
	cin >> number;

	int sum = 0;
	for (char ch : number)
	{
		sum += ch - 48;
	}

	cout << sum;
}
