#include <iostream>
#include <map>

using namespace std;

int main()
{
	map<int, string> m
	{
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
	};
	int t1, t2, t3;
	cin >> t1 >> t2 >> t3;
	cout << m[((t1 > 0) + (t2 > 0) + (t3 > 0)) * 10 + (t1 < 0) + (t2 < 0) + (t3 < 0)];
}