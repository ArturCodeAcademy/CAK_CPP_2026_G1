#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Šioje pamokoje mokomės aritmetinių operatorių.
    // Aritmetiniai operatoriai leidžia atlikti paprastus matematinius veiksmus.

    // Sukuriame du sveikųjų skaičių tipo kintamuosius.
    int firstNumber = 10;
    int secondNumber = 3;

    // Išvedame pradines kintamųjų reikšmes.
    // Konsolėje matysime ne kintamojo pavadinimą, o jo viduje saugomą reikšmę.
    cout << "firstNumber = " << firstNumber << endl;
    cout << "secondNumber = " << secondNumber << endl;
    cout << endl;

    // Sudėtis: prie pirmo skaičiaus pridedame antrą skaičių.
    cout << "Addition: " << firstNumber + secondNumber << endl;

    // Atimtis: iš pirmo skaičiaus atimame antrą skaičių.
    cout << "Subtraction: " << firstNumber - secondNumber << endl;

    // Daugyba: pirmą skaičių padauginame iš antro skaičiaus.
    cout << "Multiplication: " << firstNumber * secondNumber << endl;

    // Dalyba: pirmą skaičių daliname iš antro skaičiaus.
    // Kadangi abu kintamieji yra int tipo, rezultatas taip pat bus sveikasis skaičius.
    // 10 / 3 yra 3, nes dalis po kablelio yra atmetama.
    cout << "Division: " << firstNumber / secondNumber << endl;

    // Dalybos liekana: gauname liekaną po dalybos.
    // 10 / 3 = 3 ir liekana 1, todėl rezultatas bus 1.
    cout << "Remainder: " << firstNumber % secondNumber << endl;
    cout << endl;

    // Skliaustai keičia veiksmų tvarką.
    // Be skliaustų pirmiau atliekama daugyba, o tik tada sudėtis.
    int resultWithoutParentheses = 2 + 3 * 4;

    // Su skliaustais pirmiau atliekamas veiksmas skliaustuose.
    int resultWithParentheses = (2 + 3) * 4;

    // Čia matome, kad rezultatai skiriasi.
    cout << "Without parentheses: " << resultWithoutParentheses << endl;
    cout << "With parentheses: " << resultWithParentheses << endl;
    cout << endl;

    // Trumpesnė priskyrimo forma leidžia pakeisti kintamojo reikšmę trumpiau.
    int score = 10;

    // Išvedame pradinę reikšmę.
    cout << "Initial score: " << score << endl;

    // score = score + 5 reiškia: prie dabartinės score reikšmės pridedame 5.
    score = score + 5;
    cout << "After score = score + 5: " << score << endl;

    // Tas pats veiksmas gali būti parašytas trumpiau.
    score += 5;
    cout << "After score += 5: " << score << endl;

    // Taip pat galime trumpiau atimti, dauginti, dalinti ir gauti liekaną.
    score -= 4;
    cout << "After score -= 4: " << score << endl;

    score *= 2;
    cout << "After score *= 2: " << score << endl;

    score /= 3;
    cout << "After score /= 3: " << score << endl;

    score %= 5;
    cout << "After score %= 5: " << score << endl;
    cout << endl;

    // double ir float tipai naudojami skaičiams su kableliu.
    // Tačiau tokie skaičiai kompiuteryje ne visada saugomi visiškai tiksliai.
    double firstRealNumber = 0.1;
    double secondRealNumber = 0.2;
    double realResult = firstRealNumber + secondRealNumber;

    // Paprastai cout gali parodyti suapvalintą rezultatą.
    cout << "0.1 + 0.2 with default output: " << realResult << endl;

    // Šią eilutę kol kas tiesiog naudojame tam, kad pamatytume daugiau skaitmenų po kablelio.
    // Vėliau apie išvedimo formatavimą kalbėsime plačiau.
    cout << fixed << setprecision(17);

    // Dabar galime pamatyti, kad rezultatas gali būti ne visiškai tikslus.
    cout << "0.1 + 0.2 with more digits: " << realResult << endl;

    // Tas pats principas galioja ir float tipui.
    float firstFloatNumber = 0.1f;
    float secondFloatNumber = 0.2f;
    float floatResult = firstFloatNumber + secondFloatNumber;

    // Float dažniausiai saugo mažiau tikslumo negu double.
    cout << setprecision(9);
    cout << "0.1 + 0.2 with float: " << floatResult << endl;

    // Programa baigia darbą.
    return 0;
}