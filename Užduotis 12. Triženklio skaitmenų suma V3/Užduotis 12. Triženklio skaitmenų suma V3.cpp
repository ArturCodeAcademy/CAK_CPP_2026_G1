#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int number, a, b, c;
	cin >> number;

	a = number / 100;
	b = (number / 10) % 10;
	c = number % 10;

	sum = a + b + c;

	cout << sum;
}
