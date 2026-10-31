#include <iostream>

using namespace std;

int main()
{
    int p, k, s;
    int npk = 0;

    cin >> p >> k >> s;

    while (p <= s)
    {
        s -= p;
        p += k;
        npk++;
    }

    cout << "Pirkejo nupirktu prekiu kiekis: " << npk;
}
