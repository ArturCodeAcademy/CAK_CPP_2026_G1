#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n, h, m, s;
	cin >> n >> h >> m >> s;
	int totalSeconds = h * 3600 + m * 60 + s;

	for (int i = 0; i < n; i++)
	{
		totalSeconds /= 3;
		h = totalSeconds / 3600;
		m = (totalSeconds % 3600) / 60;
		s = totalSeconds % 60;
		cout << setw(2) << setfill('0') << h << ":"
			 << setw(2) << setfill('0') << m << ":"
			 << setw(2) << setfill('0') << s << endl;
	}
}