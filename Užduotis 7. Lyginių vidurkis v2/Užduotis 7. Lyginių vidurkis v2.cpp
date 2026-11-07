#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n;
	cin >> n;
	if (n == 1)
	{
		cout << "NO" << endl;
	}
	else
	{
		cout << n / 2 + 1 << endl;
	}
}
