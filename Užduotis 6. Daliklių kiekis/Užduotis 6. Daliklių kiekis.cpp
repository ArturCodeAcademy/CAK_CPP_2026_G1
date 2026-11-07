#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n, c = 2;
	cin >> n;

	if (n == 1)
	{
		cout << 1;
		return 0;
	}

	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}

	cout << c << endl;
}
