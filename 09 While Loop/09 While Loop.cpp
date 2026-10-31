#include <iostream>

using namespace std;

int main()
{
    // while ciklas leidžia kartoti kodą tol, kol sąlyga yra true.
    // Jis panašus į if sąlygą, bet if blokas įvykdomas vieną kartą,
    // o while blokas kartojamas daug kartų.

    // Bendra while ciklo forma:
    // while (sąlyga)
    // {
    //     Kodas, kuris bus kartojamas.
    // }

    // 1 pavyzdys: skaičiuojame nuo 0 iki 10.
    // Sukuriame kintamąjį, nuo kurio pradėsime skaičiavimą.
    int number = 0;

    // Ciklas veiks tol, kol number reikšmė bus mažesnė arba lygi 10.
    while (number <= 10)
    {
        // Išvedame dabartinę number reikšmę.
        cout << number << endl;

        // Padidiname number reikšmę vienetu.
        // Tai labai svarbu, nes kitaip number visada liktų 0,
        // sąlyga number <= 10 visada būtų true,
        // ir ciklas niekada nesibaigtų.
        number++;
    }

    cout << endl;

    // 2 pavyzdys: skaičiuojame atgal nuo 10 iki 0.
    int countdown = 10;

    // Ciklas veiks tol, kol countdown bus didesnis arba lygus 0.
    while (countdown >= 0)
    {
        cout << countdown << endl;

        // Sumažiname countdown reikšmę vienetu.
        // Taip artėjame prie ciklo pabaigos.
        countdown--;
    }

    cout << endl;

    // 3 pavyzdys: skaitome skaičius, kol vartotojas įveda 0.
    // Kartais iš anksto nežinome, kiek kartų reikės kartoti veiksmą.
    // Tokiais atvejais while ciklas yra labai patogus.

    int value;

    cout << "Iveskite skaiciu. Jei norite sustoti, iveskite 0: ";
    cin >> value;

    // Ciklas veiks tol, kol įvesta reikšmė nėra lygi 0.
    while (value != 0)
    {
        cout << "Jus ivedete: " << value << endl;

        // Ciklo viduje vėl prašome įvesti naują reikšmę.
        // Jei šios eilutės nebūtų, value nesikeistų,
        // ir ciklas galėtų tapti begalinis.
        cout << "Iveskite kita skaiciu. Jei norite sustoti, iveskite 0: ";
        cin >> value;
    }

    cout << "Ciklas sustojo, nes buvo ivestas 0." << endl;
    cout << endl;

    // 4 pavyzdys: skaičiuojame įvestų skaičių sumą, kol įvedamas 0.
    // Nulis čia naudojamas kaip ženklas sustabdyti ciklą.
    // Pats nulis prie sumos nieko neprideda.

    int inputNumber;
    int sum = 0;

    cout << "Iveskite skaicius, kuriuos norite sudeti." << endl;
    cout << "Kai noresite baigti, iveskite 0: ";
    cin >> inputNumber;

    while (inputNumber != 0)
    {
        // Prie sumos pridedame naują įvestą skaičių.
        // sum += inputNumber yra trumpesnė forma už sum = sum + inputNumber.
        sum += inputNumber;

        cout << "Iveskite kita skaiciu arba 0, jei norite baigti: ";
        cin >> inputNumber;
    }

    cout << "Ivestu skaiciu suma: " << sum << endl;
    cout << endl;

    // 5 pavyzdys: sudėtingesnė while sąlyga.
    // Norime, kad vartotojas įvestų amžių nuo 1 iki 120.
    // Jei įvestas skaičius yra netinkamas, prašome įvesti dar kartą.

    int age;

    cout << "Iveskite amziu nuo 1 iki 120: ";
    cin >> age;

    // Sąlyga age < 1 || age > 120 reiškia:
    // kartok ciklą, kol amžius yra mažesnis už 1 ARBA didesnis už 120.
    while (age < 1 || age > 120)
    {
        cout << "Netinkamas amzius. Bandykite dar karta: ";
        cin >> age;
    }

    cout << "Amzius priimtas: " << age << endl;
    cout << endl;

    // 6 pavyzdys: begalinis ciklas.
    // Šis pavyzdys yra užkomentuotas, nes paleidus tokį kodą programa nesustotų.

    // int badNumber = 0;
    // while (badNumber < 10)
    // {
    //     cout << badNumber << endl;
    //     // badNumber reikšmė niekada nesikeičia.
    //     // Todėl sąlyga badNumber < 10 visada bus true.
    // }

    // Užduotis:
    // 1. Parašykite while ciklą, kuris išveda skaičius nuo 1 iki 20.
    // 2. Parašykite while ciklą, kuris išveda skaičius nuo 20 iki 1.
    // 3. Leiskite vartotojui įvesti skaičius tol, kol jis įveda 0.
    // 4. Suskaičiuokite visų įvestų skaičių sumą.
    // 5. Patikrinkite, kad įvestas skaičius būtų nuo 10 iki 50.

    return 0;
}