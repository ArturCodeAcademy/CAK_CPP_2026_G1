#include <iostream>

using namespace std;

int main()
{
    // for ciklas naudojamas tada, kai norime kartoti veiksmą žinomą kartų skaičių.
    // Dažniausiai for cikle turime skaitiklį, kuris keičiasi po kiekvieno kartojimo.

    // for ciklas turi 4 pagrindines dalis:
    // 1. Inicializavimas - čia dažniausiai sukuriame skaitiklį ir priskiriame pradinę reikšmę.
    // 2. Sąlyga - ciklas kartojamas tol, kol ši sąlyga yra true.
    // 3. Pooperacija - atliekama po kiekvieno ciklo kartojimo, dažniausiai keičiame skaitiklį.
    // 4. Ciklo kūnas - kodas tarp { }, kuris bus kartojamas.

    cout << "Counting from 0 to 10:" << endl;

    // counter = 0 - sukuriame skaitiklį ir pradedame nuo 0.
    // counter <= 10 - ciklas kartojamas, kol counter yra mažesnis arba lygus 10.
    // counter++ - po kiekvieno kartojimo counter padidinamas vienetu.
    for (int counter = 0; counter <= 10; counter++)
    {
        cout << counter << endl;
    }

    cout << endl;

    cout << "Counting from 10 to 0:" << endl;

    // Galime skaitiklį ne tik didinti, bet ir mažinti.
    for (int counter = 10; counter >= 0; counter--)
    {
        cout << counter << endl;
    }

    cout << endl;

    cout << "Counting with step 2:" << endl;

    // Skaitiklis neprivalo keistis tik per 1.
    // Čia po kiekvieno kartojimo prie counter pridedame 2.
    for (int counter = 0; counter <= 20; counter += 2)
    {
        cout << counter << endl;
    }

    cout << endl;

    cout << "Counting with step 3:" << endl;

    // Čia einame kas 3.
    for (int counter = 0; counter <= 30; counter += 3)
    {
        cout << counter << endl;
    }

    cout << endl;

    // Papildoma informacija.
    // C++ kalboje ne visos for ciklo dalys yra privalomos.
    // Tai žinoti nebūtina pačioje pradžioje, bet naudinga suprasti, kad sintaksė yra lanksti.

    int outsideCounter = 0;

    // Inicializavimo dalį galime praleisti, jei skaitiklis sukurtas anksčiau.
    for (; outsideCounter < 3; outsideCounter++)
    {
        cout << "outsideCounter: " << outsideCounter << endl;
    }

    cout << endl;

    int noPostCounter = 0;

    // Pooperacijos dalį galime praleisti.
    // Tada skaitiklį privalome pakeisti ciklo kūne.
    // Jei to nepadarysime, galime gauti begalinį ciklą.
    for (; noPostCounter < 3;)
    {
        cout << "noPostCounter: " << noPostCounter << endl;
        noPostCounter++;
    }

    cout << endl;

    // Sąlygą taip pat galima praleisti, bet tada gauname begalinį ciklą.
    // Šios eilutės NEATKOMENTUOKITE, nes programa niekada nesustos.
    // for (;;)
    // {
    //     cout << "Infinite loop" << endl;
    // }

    // Teoriškai galima parašyti ir tuščią for ciklą be kūno.
    // Toks kodas gali susikompiliuoti, bet jis dažniausiai neturi prasmės.
    // Šios eilutės taip pat neaktyvuojame.
    // for (;;);

    // Taip pat galima parašyti ciklą su tuščiu kūnu.
    // Šis ciklas tiesiog padidins counter nuo 0 iki 3, bet nieko naudingo nepadarys.
    // for (int counter = 0; counter < 3; counter++);

    cout << "Sum of even numbers from 0 to 100 using if:" << endl;

    int evenSumWithCondition = 0;

    // Einame per visus skaičius nuo 0 iki 100.
    for (int number = 0; number <= 100; number++)
    {
        // Jei skaičius dalijasi iš 2 be liekanos, jis yra lyginis.
        if (number % 2 == 0)
        {
            evenSumWithCondition += number;
        }
    }

    cout << evenSumWithCondition << endl;

    cout << endl;

    cout << "Sum of even numbers from 0 to 100 using step 2:" << endl;

    int evenSumWithStep = 0;

    // Kadangi lyginiai skaičiai yra 0, 2, 4, 6 ir t.t.,
    // galime iš karto eiti kas 2 ir nebetikrinti su if.
    for (int number = 0; number <= 100; number += 2)
    {
        evenSumWithStep += number;
    }

    cout << evenSumWithStep << endl;

    cout << endl;

    cout << "Sum of odd numbers from 1 to 99 using step 2:" << endl;

    int oddSum = 0;

    // Nelyginiai skaičiai yra 1, 3, 5, 7 ir t.t.
    for (int number = 1; number < 100; number += 2)
    {
        oddSum += number;
    }

    cout << oddSum << endl;

    cout << endl;

    cout << "Checking numbers inside for loop:" << endl;

    // for ciklo viduje galime naudoti if ir else.
    for (int number = 1; number <= 5; number++)
    {
        if (number % 2 == 0)
        {
            cout << number << " is even" << endl;
        }
        else
        {
            cout << number << " is odd" << endl;
        }
    }

    cout << endl;

    // for ciklą taip pat galime rašyti if arba else bloko viduje.
    bool shouldPrintNumbers = true;

    if (shouldPrintNumbers)
    {
        cout << "Numbers will be printed:" << endl;

        for (int number = 1; number <= 5; number++)
        {
            cout << number << endl;
        }
    }
    else
    {
        cout << "Numbers will not be printed." << endl;
    }

    cout << endl;

    cout << "for loop with double counter:" << endl;

    // for cikle dažniausiai naudojame int tipo skaitiklį,
    // bet C++ leidžia naudoti ir kitus tipus, pavyzdžiui double.
    // Reikia prisiminti, kad double reikšmės ne visada saugomos visiškai tiksliai.
    for (double distance = 0.0; distance <= 1.0; distance += 0.2)
    {
        cout << distance << endl;
    }

    cout << endl;

    // Užduotis:
    // 1. Išveskite skaičius nuo 1 iki 20.
    // 2. Išveskite skaičius nuo 20 iki 1.
    // 3. Suskaičiuokite skaičių nuo 1 iki 50 sumą.
    // 4. Suskaičiuokite nelyginių skaičių nuo 1 iki 100 sumą.
    // 5. Pabandykite pakeisti ciklo žingsnį į 5.

    return 0;
}