#include <iostream>
using namespace std;

void PrintWordsFromAAAToZZZ()
{
    string Word = "";

    for (int i = 65; i <= 90; i++)
    {
        for (int j = 65; j <= 90; j++)
        {
            for (int k = 65; k <= 90; k++)
            {
                Word += char(i);
                Word += char(j);
                Word += char(k);

                cout << Word << endl;
                Word = "";
            }
        }
        cout << "\n--------------------------------\n";
    }
}
int main()
{
    PrintWordsFromAAAToZZZ();
    return 0;
}