#include <iostream>

using namespace std;

int main()
{
    int n, m = 0, a = 0;
    cin >> n;

    while (n > 0)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            m += n;
        }
        else
        {
            n--;
            m++;
        }
        a++;
        // cout << a << " " << n << " " << m << endl;
    }

    cout << a;
}
