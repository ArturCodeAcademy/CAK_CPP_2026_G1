#include <iostream>

using namespace std;

int main()
{
    int t, s1, s2, ss1 = 0, ss2 = 0;
    cin >> t;

    while (ss1 < t && ss2 < t)
    {
        cin >> s1 >> s2;
        ss1 += s1;
        ss2 += s2;
    }

    if (ss1 >= t && ss2 >= t)
        cout << "Zaidimas baigesi lygiosiomis" << endl;
    else if (ss1 >= t)
        cout << "Zaidima laimi 1 draugas" << endl;
    else
        cout << "Zaidima laimi 2 draugas" << endl;

    return 0;
}
