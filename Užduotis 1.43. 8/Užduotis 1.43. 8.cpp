#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int a1, b1, a2, b2, a3, b3;
	cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

	int s1 = a1 * b1 / 2;
	int s2 = a2 * b2 / 2;
	int s3 = a3 * b3 / 2;

	if (s1 == s2 || s1 == s3 || s2 == s3)
	{
		cout << "Taip" << endl;
	}
	else
	{
		cout << "Ne" << endl;
	}

	return 0;
}
