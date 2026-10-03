#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Šioje pamokoje mokomės įvesti ir išvesti duomenis.
    // Kol kas dirbame tik su skaičiais: int ir double.

    // iostream biblioteka leidžia naudoti cin ir cout.
    // cout naudojame, kai norime išvesti informaciją į konsolę.
    // cin naudojame, kai norime nuskaityti informaciją iš konsolės.

    // iomanip biblioteka leidžia tvarkyti išvedimo formatą.
    // Šiandien naudosime setprecision, fixed ir setw.

    // ============================================================
    // 1. Vienos reikšmės nuskaitymas su cin
    // ============================================================

    int firstNumber;

    cout << "Enter one integer number: ";

    // cin paima reikšmę iš konsolės ir įrašo ją į kintamąjį.
    // Šiuo atveju vartotojo įvesta reikšmė bus įrašyta į firstNumber.
    cin >> firstNumber;

    // Kai išvedame kintamojo pavadinimą be kabučių,
    // konsolėje matome ne pavadinimą, o kintamojo reikšmę.
    cout << "You entered: " << firstNumber << endl;

    cout << endl;

    // ============================================================
    // 2. double tipo reikšmės nuskaitymas
    // ============================================================

    double realNumber;

    cout << "Enter one real number: ";

    // Jeigu kintamasis yra double tipo,
    // galime nuskaityti skaičių su kableliu.
    // C++ kalboje realieji skaičiai dažniausiai rašomi su tašku, pvz. 3.14.
    cin >> realNumber;

    cout << "You entered: " << realNumber << endl;

    cout << endl;

    // ============================================================
    // 3. Kelių reikšmių nuskaitymas viena cin eilute
    // ============================================================

    int age;
    int points;
    double height;

    cout << "Enter age, points and height: ";

    // Galime nuskaityti kelias reikšmes iš eilės.
    // Pirma įvesta reikšmė pateks į age.
    // Antra įvesta reikšmė pateks į points.
    // Trečia įvesta reikšmė pateks į height.
    cin >> age >> points >> height;

    cout << "age value: " << age << endl;
    cout << "points value: " << points << endl;
    cout << "height value: " << height << endl;

    cout << endl;

    // ============================================================
    // 4. Tarpai ir naujos eilutės įvedime
    // ============================================================

    int a;
    int b;
    int c;

    cout << "Enter three integer numbers: ";

    // cin skaito reikšmes, atskirtas tarpais, tabuliacija arba nauja eilute.
    // Tai reiškia, kad šiuos tris skaičius galima įvesti vienoje eilutėje:
    // 10 20 30
    //
    // Galima įvesti ir per kelias eilutes:
    // 10
    // 20
    // 30
    //
    // Programa vis tiek nuskaitys reikšmes ta pačia tvarka.
    cin >> a >> b >> c;

    cout << "a value: " << a << endl;
    cout << "b value: " << b << endl;
    cout << "c value: " << c << endl;

    cout << endl;

    // ============================================================
    // 5. cout ir kelių dalių išvedimas
    // ============================================================

    // Su cout galime išvesti tekstą, kintamuosius ir skaičius.
    // Tekstas turi būti tarp dvigubų kabučių.
    // Kintamojo pavadinimas be kabučių reiškia jo reikšmę.

    cout << "Text in quotes is printed as text." << endl;
    cout << "Variable a has value: " << a << endl;
    cout << "Variable b has value: " << b << endl;
    cout << "Variable c has value: " << c << endl;

    cout << endl;

    // ============================================================
    // 6. setprecision be fixed
    // ============================================================

    double exampleNumber = 123.456789;

    cout << "Default output: " << exampleNumber << endl;

    // setprecision be fixed nurodo bendrą rodomų reikšmingų skaitmenų kiekį.
    // Tai dar nereiškia, kad bus rodomi tiksliai tiek skaitmenų po kablelio.
    cout << setprecision(4);
    cout << "setprecision(4) without fixed: " << exampleNumber << endl;

    cout << endl;

    // ============================================================
    // 7. fixed ir setprecision kartu
    // ============================================================

    // fixed pakeičia realiųjų skaičių išvedimo būdą.
    // Kai naudojame fixed, setprecision nurodo,
    // kiek skaitmenų bus rodoma po kablelio.
    cout << fixed << setprecision(2);
    cout << "fixed and setprecision(2): " << exampleNumber << endl;

    // setprecision nustatymas lieka galioti ir kitoms išvedimo eilutėms,
    // kol jo nepakeičiame į kitą reikšmę.
    cout << setprecision(4);
    cout << "fixed and setprecision(4): " << exampleNumber << endl;

    cout << endl;

    // Jeigu norime grįžti prie įprastesnio realiųjų skaičių išvedimo,
    // galime panaudoti defaultfloat.
    // Kol kas svarbiausia žinoti, kad fixed įjungia fiksuotą formatą,
    // o defaultfloat leidžia grįžti prie įprasto formato.
    cout << defaultfloat;

    // ============================================================
    // 8. setw - vietos rezervavimas išvedimui
    // ============================================================

    int smallValue = 7;
    int mediumValue = 123;
    int largeValue = 12345;

    // setw nurodo minimalų plotį kitam išvedamam elementui.
    // Jei reikšmė trumpesnė už nurodytą plotį,
    // konsolėje atsiras papildomi tarpai.
    // Pagal nutylėjimą jie dedami kairėje pusėje,
    // todėl skaičius pasislenka į dešinę.
    cout << setw(8) << smallValue << endl;
    cout << setw(8) << mediumValue << endl;
    cout << setw(8) << largeValue << endl;

    cout << endl;

    // Svarbu: setw veikia tik vienam artimiausiam išvedamam elementui.
    // Jei norime sulygiuoti kelias reikšmes,
    // setw reikia parašyti prie kiekvienos reikšmės.
    cout << setw(8) << smallValue << setw(8) << mediumValue << setw(8) << largeValue << endl;

    cout << endl;

    // ============================================================
    // 9. left ir right lygiavimas
    // ============================================================

    // right reiškia, kad reikšmė lygiuojama į dešinę.
    // Papildomi tarpai atsiras prieš reikšmę.
    cout << right;
    cout << setw(10) << smallValue << "end" << endl;

    // left reiškia, kad reikšmė lygiuojama į kairę.
    // Papildomi tarpai atsiras po reikšmės.
    cout << left;
    cout << setw(10) << smallValue << "end" << endl;

    cout << endl;

    // Dažnai po left naudojimo patogu grąžinti right,
    // kad skaičiai vėl būtų lygiuojami į dešinę.
    cout << right;

    // ============================================================
    // 10. Mažos lentelės išvedimas
    // ============================================================

    // setw padeda išvesti duomenis stulpeliais.
    // Šiame pavyzdyje tekstas naudojamas tik išvedimui,
    // bet teksto nuskaitymo dar nesimokome.

    cout << left << setw(12) << "Number" << right << setw(10) << "Value" << endl;
    cout << left << setw(12) << "A" << right << setw(10) << 15 << endl;
    cout << left << setw(12) << "B" << right << setw(10) << 200 << endl;
    cout << left << setw(12) << "C" << right << setw(10) << 3000 << endl;

    cout << endl;

    // Užduotis:
    // 1. Sukurkite du int tipo kintamuosius ir vieną double tipo kintamąjį.
    // 2. Nuskaitykite visas reikšmes su viena cin eilute.
    // 3. Pabandykite reikšmes įvesti vienoje eilutėje ir per kelias eilutes.
    // 4. Išveskite double reikšmę su fixed ir setprecision(2).
    // 5. Sukurkite mažą lentelę, kurioje naudojamas setw.
    // 6. Pabandykite left ir right lygiavimą.

    return 0;
}