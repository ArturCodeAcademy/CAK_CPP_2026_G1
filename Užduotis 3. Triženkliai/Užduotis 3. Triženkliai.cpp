#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x >= 100 && x <= 999)
    {
        cout << "TAIP";
    }
    else
    {
        cout << "NE";
    }

    return 0;
}