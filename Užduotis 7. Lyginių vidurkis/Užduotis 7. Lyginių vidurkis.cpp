#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n, c = 0, s = 0;
	cin >> n;

	for (int i = 2; i <= n; i += 2)
	{
		c++;
		s += i;
	}

	if (c == 0)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << s / c << endl;
	}

}
