#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream cin("U1.txt");
    ofstream cout("U1rez.txt");

    long long n, k = 0;

    cin >> n;

    while (n > 0)
    {
        k++;
        n /= 10;
    }

    cout << k;
}
