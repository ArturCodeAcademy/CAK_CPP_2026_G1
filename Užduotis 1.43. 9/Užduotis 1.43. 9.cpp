#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	int c1 = a1 * b2;
	int c2 = a2 * b1;
	
	if (c1 > c2)
	{
		cout << "Pirmoji didesne" << endl;
	}
	else if (c2 > c1)
	{
		cout << "Antroji didesne" << endl;
	}
	else
	{
		cout << "Trupmenos lygios" << endl;
	}

	return 0;
}
