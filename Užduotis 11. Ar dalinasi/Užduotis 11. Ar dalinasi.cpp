#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream cin("U1.txt");
    ofstream cout("U1rez.txt");

    int  a, b;
	bool found = false;
    cin >> a >> b;
    for (int i = 10; i < 100; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            cout << i << endl;
            found = true;
        }
    }
    if (!found)
        cout << "NERA";
}