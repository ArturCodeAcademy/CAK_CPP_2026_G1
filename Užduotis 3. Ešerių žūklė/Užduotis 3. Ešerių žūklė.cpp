#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main()
{
    long long m, bm = 0, r = 0;

    cin >> m;

    while (m > 0)
    {
        bm += m;
        if (m > 100)
            r++;
        cin >> m;
    }

    cout << "Zuvu mase: " << bm << endl;
    cout << "Rimtu zuvu kiekis: " << r << endl;
}
