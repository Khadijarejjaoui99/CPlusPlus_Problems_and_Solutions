#include <iostream>
using namespace std;

enum enCountryName
{
    Morocco = 1,
    Egypt = 2,
    Nigeria = 3,
    Tunisia = 4,
    Algeria = 5,
    Germany = 6,
    France = 7,
    Italy = 8,
    Spain = 9,
    USA = 10,
    China = 11,
    Bangladesh = 12,
    India = 13,
    Turkey = 14,
    Japan = 15

};

enCountryName ReadCountryName()
{
    int choice;
    cout << "*************************************\n";
    cout << "Please choose country number:\n";
    cout << "(1) Morocco\n";
    cout << "(2) Egypt\n";
    cout << "(3) Nigeria\n";
    cout << "(4) Tunisia\n";
    cout << "(5) Algeria\n";
    cout << "(6) Germany\n";
    cout << "(7) France\n";
    cout << "(8) Italy\n";
    cout << "(9) Spain\n";
    cout << "(10) USA\n";
    cout << "(11) China\n";
    cout << "(12) Bangladesh\n";
    cout << "(13) India\n";
    cout << "(14) Turkey\n";
    cout << "(15) Japan\n";
    cout << "*************************************\n";
    cout << "Your Choice: ";
    cin >> choice;

    return (enCountryName)choice;
}

string CountryLanguge(enCountryName CountryName)
{
    switch (CountryName)
    {
    case enCountryName::Morocco:
        return "Arabic";
        break;
    case enCountryName::Egypt:
        return "Arabic";
        break;
    case enCountryName::Nigeria:
        return "English";
        break;
    case enCountryName::Tunisia:
        return "Arabic";
        break;
    case enCountryName::Algeria:
        return "Arabic";
        break;
    case enCountryName::Germany:
        return "German";
        break;
    case enCountryName::France:
        return "French";
        break;
    case enCountryName::Italy:
        return "Italian";
        break;
    case enCountryName::Spain:
        return "Spanish";
        break;
    case enCountryName::USA:
        return "English";
        break;
    case enCountryName::China:
        return "Mandarin Chinese";
        break;
    case enCountryName::Bangladesh:
        return "Bengali";
        break;
    case enCountryName::India:
        return "Hindi";
        break;
    case enCountryName::Turkey:
        return "Turkish";
        break;
    case enCountryName::Japan:
        return "Japanese";
        break;
    default:
        return "Invalid Choice!";
    }
}
void PrintCountryLanguage(string Language)
{
    cout << "\n********************************\n";
    cout << Language << endl;
    cout << "********************************\n";
}
int main()
{
    PrintCountryLanguage(CountryLanguge(ReadCountryName()));

    return 0;
}