#include <iostream>
using namespace std;

string ReadPassword()
{
    string Password;

    cout << "Please enter your password: (all capital)\n";
    cin >> Password;

    return Password;
}

bool Guess3LettersPassword(string Password)
{
    string Word = "";
    int Counter = 0;

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Word += char(i);
                Word += char(j);
                Word += char(k);

                Counter++;

                cout << "Trial [" << Counter << "]: " << Word << endl;

                if (Password == Word)
                {
                    cout << "Password is " << Password << endl;
                    cout << "Found after " << Counter << " Trial(s)" << endl;
                    return true;
                }

                Word = "";
            }
        }
    }
}

int main()
{
    Guess3LettersPassword(ReadPassword());
    return 0;
}