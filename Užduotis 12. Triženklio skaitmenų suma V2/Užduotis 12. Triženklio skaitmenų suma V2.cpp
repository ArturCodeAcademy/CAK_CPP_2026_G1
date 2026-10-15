#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	char c;
	cin >> c;
	sum += c - '0';
	cin >> c;
	sum += c - '0';
	cin >> c;
	sum += c - '0';

	cout << sum;
}
