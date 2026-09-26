#include <iostream>

using namespace std;

int main()
{
    // Kintamasis - tai vieta atmintyje, kurioje saugoma reikšmė.
    // Kiekvienas kintamasis turi tipą, pavadinimą ir reikšmę.

    // Norint sukurti kintamąjį, pirmiausia rašome jo tipą,
    // tada kintamojo pavadinimą.
    // Pavyzdžiui:
    int number;

    // Tokia eilutė vadinama kintamojo deklaravimu.
    // Deklaravimas reiškia, kad mes pasakome programai:
    // "Sukurk kintamąjį tokiu pavadinimu ir tokiu tipu."

    // Kol kintamajam nepriskyrėme reikšmės,
    // jo geriau nenaudoti, nes jame gali būti neaiški reikšmė.

    // Reikšmę kintamajam galime priskirti vėliau.
    number = 10;

    // Galime kintamąjį sukurti ir iš karto jam priskirti reikšmę.
    // Tai vadinama inicializavimu.
    int anotherNumber = 20;

    // Taip pat galime sukurti kelis to paties tipo kintamuosius vienoje eilutėje.
    int firstNumber, secondNumber, thirdNumber;

    // Jiems reikšmes galime priskirti vėliau.
    firstNumber = 1;
    secondNumber = 2;
    thirdNumber = 3;

    // Galime ir kelis kintamuosius sukurti bei iš karto inicializuoti.
    int x = 5, y = 10, z = 15;

    // Kintamųjų reikšmes galime išvesti į konsolę.
    cout << "number value: " << number << endl;
    cout << "anotherNumber value: " << anotherNumber << endl;
    cout << "firstNumber value: " << firstNumber << endl;
    cout << "secondNumber value: " << secondNumber << endl;
    cout << "thirdNumber value: " << thirdNumber << endl;
    cout << "x value: " << x << endl;
    cout << "y value: " << y << endl;
    cout << "z value: " << z << endl;

    cout << endl;

    // char tipas saugo vieną simbolį.
    // char reikšmės rašomos tarp viengubų kabučių.
    char grade = 'A';
    char digit = '7';

    // short tipas saugo mažus sveikuosius skaičius.
    short smallNumber = 1200;

    // int tipas dažniausiai naudojamas sveikiesiems skaičiams.
    int age = 16;

    // long long tipas naudojamas labai dideliems sveikiesiems skaičiams.
    // LL pabaigoje parodo, kad tai long long tipo reikšmė.
    long long bigNumber = 9000000000000LL;

    // float tipas saugo realųjį skaičių su mažesniu tikslumu.
    // f pabaigoje parodo, kad tai float tipo reikšmė.
    float temperature = 21.5f;

    // double tipas saugo realųjį skaičių su didesniu tikslumu.
    double height = 1.756;

    // bool tipas saugo tik true arba false reikšmes.
    bool isStudent = true;
    bool isFinished = false;

    // Galime vieno kintamojo reikšmę priskirti kitam kintamajam.
    int firstValue = 25;
    int copiedValue = firstValue;

    // Kai išvedame kintamojo pavadinimą be kabučių,
    // konsolėje matome ne pavadinimą, o kintamojo reikšmę.
    cout << "grade value: " << grade << endl;
    cout << "digit value: " << digit << endl;
    cout << "smallNumber value: " << smallNumber << endl;
    cout << "age value: " << age << endl;
    cout << "bigNumber value: " << bigNumber << endl;
    cout << "temperature value: " << temperature << endl;
    cout << "height value: " << height << endl;

    // Pagal nutylėjimą bool reikšmės išvedamos kaip 1 arba 0.
    cout << "isStudent value: " << isStudent << endl;
    cout << "isFinished value: " << isFinished << endl;

    // boolalpha leidžia bool reikšmes matyti kaip true arba false.
    cout << boolalpha;
    cout << "isStudent value with boolalpha: " << isStudent << endl;
    cout << "isFinished value with boolalpha: " << isFinished << endl;

    cout << "firstValue value: " << firstValue << endl;
    cout << "copiedValue value: " << copiedValue << endl;

    // Šios dvi eilutės parodo skirtumą tarp teksto ir kintamojo.
    cout << age << endl;     // Išves kintamojo reikšmę: 16
    cout << "age" << endl;   // Išves paprastą tekstą: age

    // Užduotis mokiniams:
    // 1. Pakeiskite kelių kintamųjų reikšmes.
    // 2. Sukurkite dar kelis kintamuosius su angliškais pavadinimais.
    // 3. Pabandykite sukurti kintamąjį be pradinės reikšmės ir vėliau ją priskirti.
    // 4. Sukurkite kelis to paties tipo kintamuosius vienoje eilutėje.
    // 5. Išveskite jų reikšmes į konsolę.

    return 0;
}