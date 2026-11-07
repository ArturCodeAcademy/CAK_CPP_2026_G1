#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream cin = ifstream("U1.txt");
	ofstream cout = ofstream("U1rez.txt");

	int a, n;
	cin >> a >> n;

	for (; a <= n; a++)
	{
		cout << a * a << endl;
	}
}
