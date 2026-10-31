#include <iostream>

using namespace std;

int main()
{
	int n, s;
	cin >> n >> s;

	if (s % n == 0)
	{
		cout << "gali " << s / n;
	}
	else
	{
		cout << "negali";
	}

	return 0;
}