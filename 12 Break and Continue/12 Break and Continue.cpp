#include <iostream>

using namespace std;

int main()
{
    // break ir continue naudojami ciklų valdymui.
    // Jie padeda sustabdyti ciklą anksčiau arba praleisti vieną iteraciją.
    // Iteracija - tai vienas ciklo pasikartojimas.

    cout << "Example 1: break inside for loop" << endl;

    // break sustabdo visą ciklą.
    // Dažniausiai break naudojamas kartu su if sąlyga.
    // Šiame pavyzdyje ciklas turėtų eiti nuo 1 iki 10,
    // bet kai i tampa lygus 5, ciklas sustabdomas.
    for (int i = 1; i <= 10; i++)
    {
        cout << "i = " << i << endl;

        if (i == 5)
        {
            // Kai programa pasiekia break,
            // ji iš karto išeina iš ciklo.
            break;
        }
    }

    cout << endl;
    cout << "Example 2: break without condition" << endl;

    // Techniškai break galima parašyti ir be if sąlygos.
    // Kompiliatorius tokį kodą leidžia.
    // Tačiau dažniausiai tai neturi prasmės,
    // nes ciklas sustos per pirmą iteraciją.
    for (int i = 1; i <= 5; i++)
    {
        cout << "Before break, i = " << i << endl;
        break;

        // Ši eilutė niekada nebus įvykdyta,
        // nes prieš ją yra break.
        cout << "This text will never be printed." << endl;
    }

    cout << endl;
    cout << "Example 3: continue inside for loop" << endl;

    // continue nesustabdo viso ciklo.
    // continue tik praleidžia likusią dabartinės iteracijos dalį
    // ir pereina prie kitos ciklo iteracijos.
    // Šiame pavyzdyje praleidžiame lyginius skaičius.
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            // Jei skaičius lyginis, daugiau šioje iteracijoje nieko nedarome.
            // Programa grįžta į ciklo pradžią ir ima kitą i reikšmę.
            continue;
        }

        // Ši eilutė įvykdoma tik tada, kai i nėra lyginis.
        cout << "Odd number: " << i << endl;
    }

    cout << endl;
    cout << "Example 4: continue without condition" << endl;

    // continue taip pat galima parašyti be if sąlygos.
    // Kompiliatorius tokį kodą leidžia.
    // Tačiau toks kodas dažniausiai neturi prasmės,
    // nes viskas, kas parašyta po continue tame pačiame ciklo bloke,
    // niekada nebus įvykdyta.
    for (int i = 1; i <= 3; i++)
    {
        cout << "Before continue, i = " << i << endl;
        continue;

        // Ši eilutė niekada nebus įvykdyta,
        // nes prieš ją yra continue.
        cout << "This text will never be printed." << endl;
    }

    cout << endl;
    cout << "Example 5: sum numbers until zero" << endl;

    // Kartais nežinome, kiek kartų reikės kartoti ciklą.
    // Tokiu atveju galime naudoti while ciklą su break.
    // Ši programa skaito skaičius iš konsolės ir skaičiuoja jų sumą.
    // Kai vartotojas įveda 0, ciklas sustoja.

    int number;
    int sum = 0;

    while (true)
    {
        cout << "Enter a number, 0 to stop: ";
        cin >> number;

        if (number == 0)
        {
            // 0 reiškia, kad vartotojas nori sustabdyti įvedimą.
            break;
        }

        // Jeigu number nėra 0, pridedame jį prie sumos.
        sum += number;
    }

    cout << "Sum: " << sum << endl;

    cout << endl;
    cout << "Example 6: continue inside while loop" << endl;

    // continue veikia ir while cikle.
    // Tik reikia būti atsargiems:
    // jei skaitiklio reikšmės nepakeisime prieš continue,
    // galime sukurti begalinį ciklą.

    int counter = 0;

    while (counter < 10)
    {
        // Pirmiausia padidiname skaitiklį.
        counter++;

        if (counter % 2 == 0)
        {
            // Lyginius skaičius praleidžiame.
            continue;
        }

        // Ši eilutė įvykdoma tik nelyginiams skaičiams.
        cout << "Odd counter value: " << counter << endl;
    }

    cout << endl;

    // Užduotis:
    // 1. Parašykite ciklą, kuris eina nuo 1 iki 20.
    // 2. Naudodami continue praleiskite skaičius, kurie dalijasi iš 3.
    // 3. Naudodami break sustabdykite ciklą, kai skaičius tampa didesnis už 15.
    // 4. Išveskite tik tuos skaičius, kurie nebuvo praleisti.

    return 0;
}