#include <iostream>
#include <set>

using namespace std;

int main()
{
	set<int> s;
	int a;

	for (int i = 0; i < 3; i++)
	{
		cin >> a;
		s.insert(a);
	}

	if (s.size() == 1)
	{
		cout << "vienas";
	}
	else if (s.size() == 2)
	{
		cout << "du";
	}
	else
	{
		cout << "trys";
	}
}