#include <iostream>

using namespace std;

int main()
{
    int x, a, b;
	cin >> x >> a >> b;
	if (x > a && x <= b)
	{
		cout << "TAIP";
	}
	else
	{
		cout << "NE";
	}
	return 0;
}
