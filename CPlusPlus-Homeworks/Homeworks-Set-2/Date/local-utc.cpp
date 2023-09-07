#pragma warning (disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Local Time

    time_t t = time(0); // get time now

    char *dt = ctime(&t); // convert to string form

    cout << "Local time is: " << dt << endl;

    // UTC time

    tm *gmtm = gmtime(&t); // converting now to tm struct for UTC date and time

    dt = asctime(gmtm);

    cout << "UTC time is: " << dt << endl;

    return 0;
}