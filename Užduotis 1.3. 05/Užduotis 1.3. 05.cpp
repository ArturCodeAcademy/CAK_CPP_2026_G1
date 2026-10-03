#include <iostream>

using namespace std;

int main()
{
    int totalP;
	cin >> totalP;

    int p, b, d;

	d = totalP / (3 * 5);
	totalP -= d * 3 * 5;

	b = totalP / 3;
	p = totalP % 3;

	cout << d << " D, " << b << " B, " << p << " P" << endl;

    return 0;
}
