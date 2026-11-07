#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream fin("U1.txt");
    ofstream fout("U1rez.txt");

    int n, sum = 0;
    fin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i * (2 * i - 1);
    }

    fout << sum << endl;


    return 0;
}
