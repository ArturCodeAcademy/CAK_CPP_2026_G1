#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int a, b, c;
	cin >> a >> b >> c;

	for (int x = -3; x <= 3; x++)
	{
		int y = a * x * x + b * x + c;
		// Kai x=-3, tai y=4
		cout << "Kai x=" << x << ", tai y=" << y << endl;
	}
}
