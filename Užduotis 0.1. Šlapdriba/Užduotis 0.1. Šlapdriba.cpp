#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " **" << endl;
		}
		else
		{
			cout << i << " *0" << endl;
		}
	}

	// for (int i = 1; i <= n; i++, cout << i << (i % 2 == 0 ? " **" : " *0") << endl);
}
