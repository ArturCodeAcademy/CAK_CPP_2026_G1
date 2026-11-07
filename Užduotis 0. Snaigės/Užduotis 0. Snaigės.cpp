#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cout << "*" << endl;
	}
}
