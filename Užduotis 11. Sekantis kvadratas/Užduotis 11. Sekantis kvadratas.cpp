#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double a_sq;
	cin >> a_sq;

	double a = sqrt(a_sq);
	double b = a + 1;
	double b_sq = b * b;

	cout << b_sq << endl;

	return 0;
}
