#include <iostream>

using namespace std;

int main()
{
	int s, m, h;
	cin >> s;

	m = s / 60 % 60;
	h = s / 60 / 60;

	// 1 val. 3 min.
	cout << h << " val. " << m << " min." << endl;

	return 0;
}
