#include <iostream>

using namespace std;

int main()
{
    int h, m, s;
	cin >> h >> m >> s;

	int total_seconds = h * 3600 + m * 60 + s;
	total_seconds -= 1;
	
	if (total_seconds == -1)
		total_seconds = 24 * 60 * 60 - 1;
	
	h = total_seconds / 60 / 60;
	m = total_seconds / 60 % 60;
	s = total_seconds % 60;

	cout << h << " " << m << " " << s;
}
