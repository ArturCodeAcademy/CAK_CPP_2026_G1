#include <iostream>

using namespace std;

int main()
{
	int num;

	cin >> num;
	int hiddenNum = (num * 13 + 25) * 45 - 7;

	cout << hiddenNum << endl;

	return 0;
}
