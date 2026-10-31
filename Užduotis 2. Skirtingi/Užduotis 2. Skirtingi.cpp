#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && b == c)
	{
		cout << "vienas";
	}
	else if (a == b || a == c || b == c)
	{
		cout << "du";
	}
	else
	{
		cout << "trys";
	}
}