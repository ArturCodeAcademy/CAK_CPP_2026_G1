#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    ifstream cin("U1.txt");
    ofstream cout("U1rez.txt");

    int n, m, k = 0;
    cin >> n >> m;

    while (m >= n)
    {
        m *= 2;
        n *= 3;
        k++;
    }

    cout << k;

}
