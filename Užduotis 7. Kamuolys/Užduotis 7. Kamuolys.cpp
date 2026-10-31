#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if (a >= d && b >= d && c >= d)
	{
		cout << "TILPS";
	}
	else
	{
		cout << "NE";
	}

	return 0;
}