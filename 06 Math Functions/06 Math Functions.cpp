#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Šiame faile mokomės naudoti matematines funkcijas C++ kalboje.
    // Daug matematinių funkcijų yra bibliotekoje cmath.
    // Dėl to viršuje parašėme: #include <cmath>

    // Biblioteka iomanip čia naudojama tam, kad galėtume gražiau išvesti realiuosius skaičius.
    // Apie fixed ir setprecision jau kalbėjome ankstesnėje pamokoje.
    // Čia juos naudojame tik tam, kad rezultatai konsolėje būtų lengviau skaitomi.
    cout << fixed << setprecision(4);

    // sqrt() funkcija apskaičiuoja kvadratinę šaknį.
    // Funkcijai tarp skliaustų paduodame skaičių, iš kurio norime ištraukti šaknį.
    // Rezultatas dažniausiai saugomas double tipo kintamajame.
    double squareRoot = sqrt(16);
    cout << "sqrt(16) = " << squareRoot << endl;

    // Galime šaknį skaičiuoti ir iš kintamojo reikšmės.
    double numberForRoot = 81;
    double rootResult = sqrt(numberForRoot);
    cout << "sqrt(numberForRoot) = " << rootResult << endl;

    cout << endl;

    // pow() funkcija kelia skaičių laipsniu.
    // Pirmas argumentas yra pagrindas, antras argumentas yra laipsnis.
    // Argumentas - tai reikšmė, kurią perduodame funkcijai tarp skliaustų.
    double powerResult = pow(2, 3);
    cout << "pow(2, 3) = " << powerResult << endl;

    // pow() funkcija grąžina double tipo rezultatą.
    // Net jeigu rezultatas atrodo kaip sveikasis skaičius, jį patogu saugoti double tipo kintamajame.
    double anotherPower = pow(5, 2);
    cout << "pow(5, 2) = " << anotherPower << endl;

    cout << endl;

    // Jei laipsnis yra 0.5, gauname kvadratinę šaknį.
    // Tai panašu į sqrt(), tik parašyta per pow().
    double rootWithPower = pow(25, 0.5);
    cout << "pow(25, 0.5) = " << rootWithPower << endl;

    // Jei norime apytiksliai apskaičiuoti kubinę šaknį, galime naudoti laipsnį 1.0 / 3.0.
    // Labai svarbu rašyti 1.0 / 3.0, o ne 1 / 3.
    // 1 / 3 C++ kalboje būtų sveikųjų skaičių dalyba, todėl rezultatas būtų 0.
    double cubicRoot = pow(27, 1.0 / 3.0);
    cout << "pow(27, 1.0 / 3.0) = " << cubicRoot << endl;

    cout << endl;

    // abs() funkcija apskaičiuoja modulį.
    // Modulis parodo skaičiaus atstumą nuo nulio.
    // Todėl rezultatas visada būna neneigiamas.
    int negativeInteger = -10;
    int positiveInteger = abs(negativeInteger);
    cout << "abs(-10) = " << positiveInteger << endl;

    // abs() taip pat gali veikti su realiaisiais skaičiais.
    double negativeReal = -10.75;
    double positiveReal = abs(negativeReal);
    cout << "abs(-10.75) = " << positiveReal << endl;

    cout << endl;

    // round() funkcija apvalina iki artimiausio sveikojo skaičiaus.
    // Rezultatas vis tiek yra realiojo tipo reikšmė, todėl čia naudojame double.
    double roundedOne = round(3.2);
    double roundedTwo = round(3.8);
    cout << "round(3.2) = " << roundedOne << endl;
    cout << "round(3.8) = " << roundedTwo << endl;

    // floor() funkcija apvalina žemyn.
    // Tai reiškia, kad ji grąžina didžiausią sveikąjį skaičių, kuris nėra didesnis už duotą skaičių.
    double floorResult = floor(3.8);
    cout << "floor(3.8) = " << floorResult << endl;

    // ceil() funkcija apvalina aukštyn.
    // Tai reiškia, kad ji grąžina mažiausią sveikąjį skaičių, kuris nėra mažesnis už duotą skaičių.
    double ceilResult = ceil(3.2);
    cout << "ceil(3.2) = " << ceilResult << endl;

    cout << endl;

    // Jei po apvalinimo tikrai norime turėti int tipo reikšmę,
    // galime rezultatą konvertuoti į int.
    // Apie tipų konvertavimą kalbėjome praeitoje pamokoje.
    int roundedAsInteger = (int)round(7.6);
    cout << "roundedAsInteger = " << roundedAsInteger << endl;

    cout << endl;

    // Dažna klaida: C++ kalboje ^ nėra kėlimo laipsniu operatorius.
    // Laipsniui naudokite pow(), o ne ^.
    // Pavyzdžiui, norėdami apskaičiuoti 2 trečiuoju laipsniu, rašome pow(2, 3).
    cout << "2 pakelta trečiuoju laipsniu yra " << pow(2, 3) << endl;

    // Mini užduotys mokiniams:
    // 1. Apskaičiuokite kvadratinę šaknį iš 144.
    // 2. Apskaičiuokite 3 pakeltą ketvirtuoju laipsniu.
    // 3. Patikrinkite, kuo skiriasi round(5.4), floor(5.4) ir ceil(5.4).

    return 0;
}