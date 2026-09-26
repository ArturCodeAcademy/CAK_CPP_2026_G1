#include <iostream>

using namespace std;

int main()
{
    // Komentaras - tai tekstas kode, kurio programa nevykdo.
    // Komentarai padeda paaiškinti, ką daro programa.

    // Ši eilutė leidžia mums naudoti cout ir išvesti informaciją į konsolę.
    // Tekstas, kurį norime išvesti, turi būti tarp dvigubų kabučių.
    cout << "Hello, C++!" << endl;

    // endl perkelia išvedimą į naują eilutę.
    cout << "This line will be printed after the first line." << endl;

    // Programa vykdo komandas iš viršaus į apačią.
    // Pirma įvykdoma aukščiau parašyta eilutė, vėliau - žemiau parašyta eilutė.
    cout << "First command." << endl;
    cout << "Second command." << endl;
    cout << "Third command." << endl;

    // Galime išvesti ir tuščią eilutę.
    cout << endl;

    // Pabandyk pakeisti šį tekstą ir paleisti programą dar kartą.
    cout << "Try to change this text and run the program again." << endl;

    // Kol kas šią eilutę tiesiog paliekame programos pabaigoje.
    return 0;
}