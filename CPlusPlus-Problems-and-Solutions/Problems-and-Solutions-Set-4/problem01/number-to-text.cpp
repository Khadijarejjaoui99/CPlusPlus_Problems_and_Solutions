#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Number;

    cout << "Please enter a number:\n";
    cin >> Number;

    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Invalid number! Please enter a number:\n";
        cin >> Number;
    }

    return Number;
}

string NumberToText(int Num)
{

    if (Num == 0)
        return "";

    else if (Num >= 1 && Num <= 19)
    {
        string arr[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

        return arr[Num];
    }

    else if (Num >= 20 && Num <= 99)
    {
        string arr[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

        return arr[Num / 10] + " " + NumberToText(Num % 10);
    }
    else if (Num >= 100 && Num <= 199)

        return "One Hundred " + NumberToText(Num % 100);

    else if (Num >= 200 && Num <= 999)

        return NumberToText(Num / 100) + " Hundreds " + NumberToText(Num % 100);

    else if (Num >= 1000 && Num <= 1999)

        return "One Thousand " + NumberToText(Num % 1000);

    else if (Num >= 2000 && Num <= 999999)

        return NumberToText(Num / 1000) + " Thousands " + NumberToText(Num % 1000);

    else if (Num >= 1000000 && Num <= 1999999)

        return "One Million " + NumberToText(Num % 1000000);

    else if (Num >= 2000000 && Num <= 999999999)

        return NumberToText(Num / 1000000) + " Millions " + NumberToText(Num % 1000000);

    else if (Num >= 1000000000 && Num <= 1999999999)

        return "One Billion " + NumberToText(Num % 1000000000);
    else
        return NumberToText(Num / 1000000000) + " Billions " + NumberToText(Num % 1000000000);
}

int main()
{
    cout << NumberToText(ReadNumber()) << endl;

    system("pause>0");
    return 0;
}