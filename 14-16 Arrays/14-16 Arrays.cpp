#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main()
{
    // Masyvas leidžia vienu pavadinimu saugoti daug to paties tipo reikšmių.
    // Vietoje to, kad kurtume daug atskirų kintamųjų, galime sukurti vieną masyvą.

    // Čia sukuriame 10 sveikųjų skaičių masyvą ir iš karto jį inicializuojame.
    // Reikšmės nėra specialiai surikiuotos, kad geriau matytume indeksus.
    int numbers[10] = { 15, 83, -14, 7, 42, 0, -8, 19, 101, -35 };

    // Masyvo elementai pasiekiami naudojant indeksą kvadratiniuose skliaustuose.
    // Labai svarbu: indeksavimas prasideda nuo 0.
    cout << "numbers[0] value: " << numbers[0] << endl; // Pirmas elementas: 15
    cout << "numbers[1] value: " << numbers[1] << endl; // Antras elementas: 83

    // Jei rašome indeksą 1, gauname ne pirmą, o antrą masyvo elementą.
    cout << "When index is 1, we get the second element: " << numbers[1] << endl;

    cout << endl;

    // Indeksą galime saugoti ir kintamajame.
    // Tai leidžia lanksčiau pasirinkti, kurį masyvo elementą norime pasiekti.
    int index = 3;
    cout << "Element with index 3: " << numbers[index] << endl;

    // Masyvo reikšmę galime ne tik skaityti, bet ir pakeisti.
    numbers[index] = 500;
    cout << "New element with index 3: " << numbers[index] << endl;

    cout << endl;

    // Jei norime atlikti veiksmus su visais masyvo elementais,
    // patogiausia naudoti ciklą.
    // Paprastame masyve C++ kalboje mes dažniausiai patys saugome jo dydį.
    const int size = 10;

    cout << "All array elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        // i kiekvieno ciklo metu tampa vis kitu indeksu: 0, 1, 2, ..., 9.
        cout << "numbers[" << i << "] = " << numbers[i] << endl;
    }

    cout << endl;

    // Masyvą galime užpildyti atsitiktiniais skaičiais.
    // srand(time(0)) leidžia kiekvieną kartą gauti kitokią atsitiktinių skaičių seką.
    srand(time(0));

    int randomNumbers[10];

    for (int i = 0; i < size; i++)
    {
        // rand() % 101 duoda skaičių nuo 0 iki 100.
        // Atėmę 50 gauname skaičių nuo -50 iki 50.
        randomNumbers[i] = rand() % 101 - 50;
    }

    cout << "Random array:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << randomNumbers[i] << " ";
    }
    cout << endl << endl;

    // Kartais nežinome, kiek reikšmių vartotojas įves.
    // Pavyzdžiui, žinome, kad reikšmių gali būti daugiausiai 10.
    // Todėl sukuriame masyvą su atsarga, bet atskirame kintamajame saugome,
    // kiek elementų iš tikrųjų naudojame.
    const int maxSize = 10;
    int values[maxSize];
    int usedCount;

    cout << "Enter how many numbers you want to use, from 3 to 10: ";
    cin >> usedCount;

    // Patikriname, ar įvestas kiekis tinkamas.
    // Jei kiekis netinkamas, šiame pavyzdyje tiesiog sustabdome programą.
    if (usedCount < 3 || usedCount > maxSize)
    {
        cout << "Wrong count." << endl;
        return 0;
    }

    cout << "Enter " << usedCount << " integer numbers:" << endl;

    for (int i = 0; i < usedCount; i++)
    {
        // Nuskaitome tik tiek elementų, kiek vartotojas pasirinko.
        // Likusi masyvo dalis tiesiog nenaudojama.
        cin >> values[i];
    }

    cout << "Entered values:" << endl;
    for (int i = 0; i < usedCount; i++)
    {
        cout << values[i] << " ";
    }
    cout << endl << endl;

    // Skaičiuojame visų elementų sumą.
    int sum = 0;

    for (int i = 0; i < usedCount; i++)
    {
        sum += values[i];
    }

    cout << "Sum: " << sum << endl;

    // Vidurkį skaičiuojame kaip realųjį skaičių.
    // Vieną operandą paverčiame į double, kad neprarastume skaičių po kablelio.
    double average = (double)sum / usedCount;
    cout << fixed << setprecision(2);
    cout << "Average: " << average << endl;

    // Mažiausios ir didžiausios reikšmės paieška.
    // Pradžioje darome prielaidą, kad pirmas elementas yra ir mažiausias, ir didžiausias.
    int minimum = values[0];
    int maximum = values[0];

    for (int i = 1; i < usedCount; i++)
    {
        if (values[i] < minimum)
        {
            minimum = values[i];
        }

        if (values[i] > maximum)
        {
            maximum = values[i];
        }
    }

    cout << "Minimum: " << minimum << endl;
    cout << "Maximum: " << maximum << endl;

    cout << endl;

    // Skaičiuojame lyginių skaičių kiekį, sumą ir vidurkį.
    int evenCount = 0;
    int evenSum = 0;

    // Skaičiuojame nelyginių skaičių kiekį, sumą ir vidurkį.
    int oddCount = 0;
    int oddSum = 0;

    for (int i = 0; i < usedCount; i++)
    {
        if (values[i] % 2 == 0)
        {
            evenCount++;
            evenSum += values[i];
        }
        else
        {
            oddCount++;
            oddSum += values[i];
        }
    }

    cout << "Even count: " << evenCount << endl;
    cout << "Even sum: " << evenSum << endl;

    if (evenCount > 0)
    {
        cout << "Even average: " << (double)evenSum / evenCount << endl;
    }
    else
    {
        cout << "There are no even numbers." << endl;
    }

    cout << "Odd count: " << oddCount << endl;
    cout << "Odd sum: " << oddSum << endl;

    if (oddCount > 0)
    {
        cout << "Odd average: " << (double)oddSum / oddCount << endl;
    }
    else
    {
        cout << "There are no odd numbers." << endl;
    }

    cout << endl;

    // Skaičiuojame teigiamus ir neigiamus skaičius.
    // Nulio nepriskiriame nei teigiamiems, nei neigiamiems skaičiams.
    int positiveCount = 0;
    int negativeCount = 0;
    int positiveSum = 0;
    int negativeSum = 0;

    // bool kintamieji padeda prisiminti, ar radome bent vieną reikalingą elementą.
    bool hasPositive = false;
    bool hasNegative = false;

    for (int i = 0; i < usedCount; i++)
    {
        if (values[i] > 0)
        {
            hasPositive = true;
            positiveCount++;
            positiveSum += values[i];
        }
        else if (values[i] < 0)
        {
            hasNegative = true;
            negativeCount++;
            negativeSum += values[i];
        }
    }

    if (hasPositive)
    {
        cout << "Positive count: " << positiveCount << endl;
        cout << "Positive sum: " << positiveSum << endl;
    }
    else
    {
        cout << "There are no positive numbers." << endl;
    }

    if (hasNegative)
    {
        cout << "Negative count: " << negativeCount << endl;
        cout << "Negative sum: " << negativeSum << endl;
    }
    else
    {
        cout << "There are no negative numbers." << endl;
    }

    cout << endl;

    // Su masyvais galima dirbti ne tik su for, bet ir su while ciklu.
    cout << "Array output using while loop:" << endl;
    int currentIndex = 0;

    while (currentIndex < usedCount)
    {
        cout << values[currentIndex] << " ";
        currentIndex++;
    }

    cout << endl;

    return 0;
}