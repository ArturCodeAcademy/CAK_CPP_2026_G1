#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	ifstream cin("U1.txt");
	ofstream cout("U1rez.txt");

	int n;
	double x1, y1, x2, y2, x3, y3;
	double a, b, c;
	double p, S, minS = -1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
		c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
		p = (a + b + c) / 2;
		S = sqrt(p * (p - a) * (p - b) * (p - c));

		if (S <= 0)
		{
			continue;
		}

		if (minS == -1 || S < minS)
		{
			minS = S;
		}
	}

	if (minS == -1)
	{
		cout << "NO";
	}
	else
	{
		cout << fixed << setprecision(2) << minS;
	}
}