#include <iostream>

using namespace std;

int main()
{
	/*
		{00, "Oro nebuvo"},
		{01, "Viena diena neigiama"},
		{02, "Dvi dienas neigiama"},
		{03, "Tris dienas neigiama"},
		{10, "Viena diena teigiama"},
		{11, "Viena diena teigiama, viena - neigiama"},
		{12, "Viena diena teigiama, dvi dienas - neigiama"},
		{20, "Dvi dienas teigiama"},
		{21, "Dvi dienas teigiama, viena - neigiama"},
		{30, "Tris dienas teigiama"}
	*/
	int t1, t2, t3;
	cin >> t1 >> t2 >> t3;
	int p = 0;
	int n = 0;

	if (t1 > 0)
		p++;
	else if (t1 < 0)
		n++;

	if (t2 > 0)
		p++;
	else if (t2 < 0)
		n++;

	if (t3 > 0)
		p++;
	else if (t3 < 0)
		n++;

	if (p == 0 && n == 0)
		cout << "Oro nebuvo";
	else if (p == 0 && n == 1)
		cout << "Viena diena neigiama";
	else if (p == 0 && n == 2)
		cout << "Dvi dienas neigiama";
	else if (p == 0 && n == 3)
		cout << "Tris dienas neigiama";
	else if (p == 1 && n == 0)
		cout << "Viena diena teigiama";
	else if (p == 1 && n == 1)
		cout << "Viena diena teigiama, viena - neigiama";
	else if (p == 1 && n == 2)
		cout << "Viena diena teigiama, dvi dienas - neigiama";
	else if (p == 2 && n == 0)
		cout << "Dvi dienas teigiama";
	else if (p == 2 && n == 1)
		cout << "Dvi dienas teigiama, viena - neigiama";
	else if (p == 3 && n == 0)
		cout << "Tris dienas teigiama";
}
