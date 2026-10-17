#include <iostream>

using namespace std;

int main()
{
    // ===============================
    // 1 dalis. bool tipas
    // ===============================

    // bool tipas saugo loginę reikšmę.
    // Loginė reikšmė gali būti tik true arba false.
    // true reiškia "tiesa", false reiškia "netiesa".
    bool isStudent = true;
    bool isFinished = false;

    // Pagal nutylėjimą C++ išveda true kaip 1, o false kaip 0.
    cout << "bool values:" << endl;
    cout << "isStudent: " << isStudent << endl;    // Išves 1
    cout << "isFinished: " << isFinished << endl;  // Išves 0
    cout << endl;

    // C++ leidžia skaičių išsaugoti bool kintamajame.
    // Skaičius 0 tampa false.
    // Visi kiti skaičiai tampa true.
    // Tai paveldėta iš C kalbos.
    // Kartais tai galima naudoti, bet mokantis geriau rašyti aiškiai:
    // naudoti true, false arba palyginimo operatorius.
    bool valueFromZero = 0;
    bool valueFromPositiveNumber = 5;
    bool valueFromNegativeNumber = -10;

    cout << "Numbers saved as bool:" << endl;
    cout << "0 as bool: " << valueFromZero << endl;                 // Išves 0
    cout << "5 as bool: " << valueFromPositiveNumber << endl;       // Išves 1
    cout << "-10 as bool: " << valueFromNegativeNumber << endl;     // Išves 1
    cout << endl;

    // Geresnis ir aiškesnis būdas sukurti bool reikšmę yra palyginimas.
    // Pavyzdžiui, čia aiškiai matome, kad tikriname, ar amžius yra 18 arba daugiau.
    int age = 16;
    bool isAdult = age >= 18;

    cout << "isAdult: " << isAdult << endl; // Išves 0, nes 16 nėra >= 18
    cout << endl;

    // ===============================
    // 2 dalis. Palyginimo operatoriai
    // ===============================

    int firstNumber = 10;
    int secondNumber = 20;

    // Palyginimo operatoriai visada grąžina bool rezultatą.
    // Tai reiškia, kad rezultatas bus true arba false.
    // Konsolėje pagal nutylėjimą matysime 1 arba 0.

    cout << "Comparison operators:" << endl;

    // == tikrina, ar dvi reikšmės yra lygios.
    // Labai svarbu: palyginimui naudojame ==, o ne =.
    cout << "firstNumber == secondNumber: " << (firstNumber == secondNumber) << endl;

    // != tikrina, ar dvi reikšmės nėra lygios.
    cout << "firstNumber != secondNumber: " << (firstNumber != secondNumber) << endl;

    // > tikrina, ar kairė pusė yra didesnė už dešinę pusę.
    cout << "firstNumber > secondNumber: " << (firstNumber > secondNumber) << endl;

    // < tikrina, ar kairė pusė yra mažesnė už dešinę pusę.
    cout << "firstNumber < secondNumber: " << (firstNumber < secondNumber) << endl;

    // >= tikrina, ar kairė pusė yra didesnė arba lygi dešinei pusei.
    cout << "firstNumber >= secondNumber: " << (firstNumber >= secondNumber) << endl;

    // <= tikrina, ar kairė pusė yra mažesnė arba lygi dešinei pusei.
    cout << "firstNumber <= secondNumber: " << (firstNumber <= secondNumber) << endl;
    cout << endl;

    // ===============================
    // 3 dalis. = ir == skirtumas
    // ===============================

    int score = 10;

    // Vienas lygybės ženklas = yra priskyrimo operatorius.
    // Ši eilutė reiškia: į kintamąjį score įrašome reikšmę 5.
    score = 5;

    // Du lygybės ženklai == yra palyginimo operatorius.
    // Ši eilutė tik patikrina, ar score yra lygus 5.
    // Ji nekeičia kintamojo reikšmės.
    cout << "score == 5: " << (score == 5) << endl;
    cout << endl;

    // ===============================
    // 4 dalis. if blokas
    // ===============================

    int temperature = -3;

    // if leidžia vykdyti kodą tik tada, kai sąlyga yra true.
    // Sąlyga rašoma tarp paprastų skliaustų: if (sąlyga)
    // Kodas, kuris priklauso if blokui, rašomas tarp figūrinių skliaustų { }.
    if (temperature < 0)
    {
        cout << "Temperature is below zero." << endl;
    }

    // Jei if bloke yra tik viena eilutė, C++ leidžia nerašyti figūrinių skliaustų.
    // Tačiau mokantis geriau visada rašyti skliaustus,
    // nes taip aiškiau matome, kurios eilutės priklauso sąlygai.
    if (temperature < 10)
    {
        cout << "Temperature is lower than 10." << endl;
    }
    cout << endl;

    if (temperature < -20)
	{
		cout << "Temperature is very low." << endl;
	}

    // ===============================
    // 5 dalis. else blokas
    // ===============================

    int points = 4;

    // else blokas vykdomas tada, kai if sąlyga yra false.
    // Čia tikriname, ar points yra 5 arba daugiau.
    if (points >= 5)
    {
        cout << "Test passed." << endl;
    }
    else
    {
        cout << "Test failed." << endl;
    }
    cout << endl;

    // ===============================
    // 6 dalis. else if grandinė
    // ===============================

    int choice = 3;

    // Kai turime daugiau nei du variantus, galime naudoti else if.
    // Programa tikrina sąlygas iš viršaus į apačią.
    // Kai randa pirmą true sąlygą, įvykdo jos bloką,
    // o likusių else if blokų nebetikrina.
    if (choice == 1)
    {
        cout << "You selected option 1." << endl;
    }
    else if (choice == 2)
    {
        cout << "You selected option 2." << endl;
    }
    else if (choice == 3)
    {
        cout << "You selected option 3." << endl;
    }
    else if (choice == 4)
    {
        cout << "You selected option 4." << endl;
    }
    else if (choice == 5)
    {
        cout << "You selected option 5." << endl;
    }
    else
    {
        // else šioje vietoje reiškia: nebuvo pasirinktas nei 1, nei 2, nei 3, nei 4, nei 5.
        cout << "Wrong choice." << endl;
    }

    if (choice == 1)
    {
        cout << "You selected option 1." << endl;
    }
    else 
    {
		if (choice == 2)
		{
			cout << "You selected option 2." << endl;
		}
		else
		{
			if (choice == 3)
			{
				cout << "You selected option 3." << endl;
			}
			else
			{
				if (choice == 4)
				{
					cout << "You selected option 4." << endl;
				}
				else
				{
					if (choice == 5)
					{
						cout << "You selected option 5." << endl;
					}
					else
					{
						cout << "Wrong choice." << endl;
					}
				}
			}
		}
    }
  
    cout << endl;

    // ===============================
    // 7 dalis. Loginiai operatoriai
    // ===============================

    // Loginiai operatoriai leidžia sujungti kelias bool reikšmes.
    // && reiškia AND arba IR.
    // Rezultatas true tik tada, kai abi pusės yra true.
    cout << "AND operator &&:" << endl;
    cout << "false && false: " << (false && false) << endl;
    cout << "false && true: " << (false && true) << endl;
    cout << "true && false: " << (true && false) << endl;
    cout << "true && true: " << (true && true) << endl;
    cout << endl;

    // || reiškia OR arba ARBA.
    // Rezultatas true tada, kai bent viena pusė yra true.
    cout << "OR operator ||:" << endl;
    cout << "false || false: " << (false || false) << endl;
    cout << "false || true: " << (false || true) << endl;
    cout << "true || false: " << (true || false) << endl;
    cout << "true || true: " << (true || true) << endl;
    cout << endl;

    // ! reiškia NOT arba NE.
    // Šis operatorius pakeičia bool reikšmę priešinga reikšme.
    cout << "NOT operator !:" << endl;
    cout << "!false: " << (!false) << endl;
    cout << "!true: " << (!true) << endl;
    cout << endl;

    // XOR reiškia "arba vienas, arba kitas, bet ne abu kartu".
    // C++ neturi atskiro loginio žodžio xor sąlygoms kaip && arba ||.
    // Tačiau su bool reikšmėmis galime naudoti operatorių ^.
    // Rezultatas true tada, kai reikšmės skirtingos.
    cout << "XOR operator ^ with bool values:" << endl;
    cout << "false ^ false: " << (false ^ false) << endl;
    cout << "false ^ true: " << (false ^ true) << endl;
    cout << "true ^ false: " << (true ^ false) << endl;
    cout << "true ^ true: " << (true ^ true) << endl;
    cout << endl;

    // ===============================
    // 8 dalis. Sudėtinės sąlygos
    // ===============================

    int number = 15;

    // Sudėtinėje sąlygoje galime sujungti kelis palyginimus.
    // Čia tikriname, ar number yra nuo 10 iki 20 imtinai.
    // C++ kalboje negalima rašyti taip: 10 <= number <= 20.
    // Reikia rašyti du atskirus palyginimus ir sujungti juos su &&.
    if (number >= 10 && number <= 20)
    {
        cout << "number is between 10 and 20." << endl;
    }

    bool hasTicket = true;
    bool isBlocked = false;

    // Čia tikriname dvi sąlygas:
    // 1. žmogus turi bilietą;
    // 2. žmogus nėra užblokuotas.
    // !isBlocked reiškia "nėra užblokuotas".
    if (hasTicket && !isBlocked)
    {
        cout << "Access allowed." << endl;
    }
    cout << endl;

    // ===============================
    // 9 dalis. Loginio prioriteto pavyzdys
    // ===============================

    // && turi didesnį prioritetą nei ||.
    // Tai reiškia, kad && dalis apskaičiuojama anksčiau.
    bool resultWithoutParentheses = true || false && false;

    // Čia skliaustai pakeičia veiksmų eiliškumą.
    // Pirmiausia apskaičiuojama tai, kas yra skliaustuose.
    bool resultWithParentheses = (true || false) && false;

    cout << "true || false && false: " << resultWithoutParentheses << endl;      // Išves 1
    cout << "(true || false) && false: " << resultWithParentheses << endl;       // Išves 0
    cout << endl;

    // ===============================
    // 10 dalis. Įdėtos sąlygos
    // ===============================

    int grade = 9;

    // if gali būti kito if viduje.
    // Tai vadinama įdėta sąlyga.
    // Vidinė sąlyga tikrinama tik tada, kai įvyksta išorinė sąlyga.
    if (grade >= 5)
    {
        cout << "Grade is positive." << endl;

        if (grade >= 9)
        {
            cout << "Grade is very good." << endl;
        }
    }
    else
    {
        cout << "Grade is negative." << endl;
    }
    cout << endl;

    // ===============================
    // 11 dalis. Lyginis ar nelyginis skaičius
    // ===============================

    int userNumber;

    cout << "Enter an integer number: ";
    cin >> userNumber;

    // Liekanos operatorius % padeda patikrinti, ar skaičius dalijasi be liekanos.
    // Jei dalijant iš 2 liekana yra 0, skaičius yra lyginis.
    // Jei liekana nėra 0, skaičius yra nelyginis.
    if (userNumber % 2 == 0)
    {
        cout << "The number is even." << endl;
    }
    else
    {
        cout << "The number is odd." << endl;
    }

    // Užduotis:
    // 1. Pakeiskite bool kintamųjų reikšmes ir pažiūrėkite, ką išveda programa.
    // 2. Sukurkite du int kintamuosius ir išveskite visų palyginimo operatorių rezultatus.
    // 3. Parašykite if / else programą, kuri patikrina, ar skaičius yra teigiamas, neigiamas ar nulis.
    // 4. Sukurkite sąlygą su && ir sąlygą su ||.
    // 5. Pakeiskite skliaustus sudėtinėse sąlygose ir pažiūrėkite, kaip keičiasi rezultatas.

    return 0;
}
