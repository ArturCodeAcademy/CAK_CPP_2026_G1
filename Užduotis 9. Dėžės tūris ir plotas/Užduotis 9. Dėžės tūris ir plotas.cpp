#include <iostream>

using namespace std;

int main()
{
	int a, b, h;
	cin >> a >> b >> h;

	// Turis 400 kub. cm., o soniniu sienu plotas 260 kv. cm
	cout << "Turis "
		 << a * b * h
		 << " kub. cm., o soniniu sienu plotas "
		 << 2 * h * (a + b)
		 << " kv. cm"
		 << endl;

	return 0;
}
