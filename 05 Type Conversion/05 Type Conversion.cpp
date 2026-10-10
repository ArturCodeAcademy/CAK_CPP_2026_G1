#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    // Šioje pamokoje kalbame apie tipų konvertavimą.
    // Tipų konvertavimas reiškia, kad vieno tipo reikšmę paverčiame kito tipo reikšme.
    // Pavyzdžiui: int galime paversti į double, o double galime paversti į int.

    // ------------------------------------------------------------
    // 1. Operandas ir operatorius
    // ------------------------------------------------------------

    // Operandas - tai reikšmė arba kintamasis, su kuriuo dirba operatorius.
    // Pavyzdžiui, išraiškoje firstNumber / secondNumber:
    // firstNumber yra pirmas operandas,
    // secondNumber yra antras operandas,
    // / yra operatorius.

    int firstNumber = 5;
    int secondNumber = 2;

    // Čia abu operandai yra int tipo.
    // Todėl C++ pirmiausia atlieka sveikųjų skaičių dalybą.
    // 5 / 2 duoda 2, nes dalis po kablelio yra atmetama.
    // Tik po to rezultatas 2 yra išsaugomas double tipo kintamajame.
    double wrongDivisionResult = firstNumber / secondNumber;

    cout << "wrongDivisionResult: " << wrongDivisionResult << endl;

    // Svarbu:
    // Jei abu operandai yra int tipo, rezultatas taip pat bus skaičiuojamas kaip int.
    // Net jei rezultatą vėliau saugome double kintamajame,
    // prarastos dalies po kablelio programa nebesugrąžins.

    // ------------------------------------------------------------
    // 2. Kaip gauti rezultatą su skaičiais po kablelio?
    // ------------------------------------------------------------

    // Kad dalybos rezultatas būtų su skaičiais po kablelio,
    // bent vienas operandas turi būti slankiojo kablelio tipo.
    // Slankiojo kablelio tipai yra float ir double.

    // Šiame pavyzdyje firstNumber paverčiame į double.
    // Tada dalyboje dalyvauja double ir int.
    // Tokiu atveju rezultatas bus double tipo.
    double correctDivisionResult1 = (double)firstNumber / secondNumber;

    // Kitas būdas - vieną skaičių parašyti su .0.
    // 2.0 yra double tipo reikšmė.
    double correctDivisionResult2 = firstNumber / 2.0;

    cout << "correctDivisionResult1: " << correctDivisionResult1 << endl;
    cout << "correctDivisionResult2: " << correctDivisionResult2 << endl;

    // fixed ir setprecision leidžia patogiau parodyti skaičius po kablelio.
    // fixed reiškia, kad setprecision nurodys kiek skaičių rodyti po kablelio.
    // setprecision(2) reiškia, kad po kablelio bus rodomi 2 skaičiai.
    cout << fixed << setprecision(2);

    cout << "correctDivisionResult1 with precision: " << correctDivisionResult1 << endl;
    cout << "correctDivisionResult2 with precision: " << correctDivisionResult2 << endl;

    // ------------------------------------------------------------
    // 3. double arba float konvertavimas į int
    // ------------------------------------------------------------

    double realNumber = 7.89;
    float anotherRealNumber = 12.75f;

    // Kai double reikšmę išsaugome int tipo kintamajame,
    // dalis po kablelio yra prarandama.
    // Tai nėra apvalinimas.
    // Programa tiesiog atmeta viską po kablelio.
    int integerFromDouble = (int)realNumber;
    int integerFromFloat = (int)anotherRealNumber;

    cout << "realNumber: " << realNumber << endl;
    cout << "integerFromDouble: " << integerFromDouble << endl;
    cout << "anotherRealNumber: " << anotherRealNumber << endl;
    cout << "integerFromFloat: " << integerFromFloat << endl;

    // Tas pats galioja ir long long tipui.
    // Jei į long long įrašome double reikšmę,
    // dalis po kablelio taip pat bus prarasta.
    double largeRealNumber = 123456789.987;
    long long largeInteger = (long long)largeRealNumber;

    cout << "largeRealNumber: " << largeRealNumber << endl;
    cout << "largeInteger: " << largeInteger << endl;

    // ------------------------------------------------------------
    // 4. Konvertavimas su skliaustais
    // ------------------------------------------------------------

    // Paprasčiausias būdas aiškiai parodyti konvertavimą:
    // prieš reikšmę parašome tipą skliaustuose.

    int wholeNumber = 10;
    double convertedToDouble = (double)wholeNumber;

    double price = 19.99;
    int convertedToInt = (int)price;

    cout << "convertedToDouble: " << convertedToDouble << endl;
    cout << "convertedToInt: " << convertedToInt << endl;

    // ------------------------------------------------------------
    // 5. char konvertavimas į int
    // ------------------------------------------------------------

    char symbol = 'A';
    char digitAsChar = '0';

    // Jei char tipo simbolį konvertuojame į int,
    // gauname ne patį simbolį kaip skaičių,
    // o jo kodą simbolių lentelėje.
    int symbolCode = (int)symbol;
    int digitCode = (int)digitAsChar;

    cout << "symbol: " << symbol << endl;
    cout << "symbolCode: " << symbolCode << endl;

    // Labai svarbus pavyzdys:
    // Simbolis '0' nėra tas pats kas skaičius 0.
    // Jei '0' konvertuojame į int, gauname 48, o ne 0.
    cout << "digitAsChar: " << digitAsChar << endl;
    cout << "digitCode: " << digitCode << endl;

    // Kol kas tiesiog įsimename:
    // char tipo skaitmens negalima paprastai paversti į skaičių naudojant (int).
    // Kaip tai padaryti teisingai, aptarsime vėlesnėse pamokose.

    // ------------------------------------------------------------
    // 6. Teksto ir skaičių konvertavimas
    // ------------------------------------------------------------

    // string tipo plačiai dar nenagrinėjame,
    // bet kartais skaičius gali būti parašytas kaip tekstas.
    // Tokiu atveju galime naudoti stoi arba stod.

    string integerText = "123";
    string doubleText = "45.67";

    // stoi paverčia tekstą į int.
    int numberFromText = stoi(integerText);

    // stod paverčia tekstą į double.
    double doubleFromText = stod(doubleText);

    cout << "numberFromText: " << numberFromText << endl;
    cout << "doubleFromText: " << doubleFromText << endl;

    // to_string paverčia skaičių į tekstą.
    int points = 100;
    double average = 8.5;

    string pointsText = to_string(points);
    string averageText = to_string(average);

    cout << "pointsText: " << pointsText << endl;
    cout << "averageText: " << averageText << endl;

    // ------------------------------------------------------------
    // Užduotis
    // ------------------------------------------------------------

    // 1. Sukurkite du int tipo kintamuosius ir padalinkite juos.
    // 2. Rezultatą išsaugokite double tipo kintamajame.
    // 3. Patikrinkite, ar gavote skaičius po kablelio.
    // 4. Vieną operandą konvertuokite į double ir pabandykite dar kartą.
    // 5. Sukurkite double tipo kintamąjį ir konvertuokite jį į int.
    // 6. Sukurkite char digit = '5'; ir patikrinkite, kokią reikšmę gausite konvertavę į int.

    return 0;
}