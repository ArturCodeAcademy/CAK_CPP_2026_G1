#include <iostream>

using namespace std;

int main()
{
	int a1, a2;
	cin >> a1 >> a2;
	
	int s1 = a1 * a1;
	int s2 = a2 * a2;

	// Uzbruksniuotos figuros plotas 21 kv. cm
	cout << "Uzbruksniuotos figuros plotas " << s1 - s2 << " kv. cm" << endl;

	return 0;
}
