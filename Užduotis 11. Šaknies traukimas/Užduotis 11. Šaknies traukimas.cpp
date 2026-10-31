#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream cin("U1.txt");
    ofstream cout("U1rez.txt");

    double n, rez = 1;
    cin >> n;

    while (abs(rez * rez - n) > 0.000001)
    {
        rez = (rez + n / rez) / 2;
    }

    cout << fixed << setprecision(6) << rez;
}
