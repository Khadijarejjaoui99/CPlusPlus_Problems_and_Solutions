#include <iostream>
using namespace std;

void FillArray(int Array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            Array[i][j] = (i + 1) * (j + 1);
        }
    }
}

void PrintArray(int Array[10][10])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {

            if (Array[i][j] <= 9)
                printf("%0*d ", 2, Array[i][j]);
            else
                printf("%d ", Array[i][j]);
        }

        cout << endl;
    }
}

int main()
{
    int Array[10][10];

    FillArray(Array);

    PrintArray(Array);

    return 0;
}