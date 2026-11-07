#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n;
	cin >> n;
	
	for (int i = 1; i <= n; i += 2)
	{
		if (i != 1)
			cout << ",";
		cout << i;
	}

	for (int i = 2; i <= n; i += 2)
	{
		cout << "," << i;
	}
}
