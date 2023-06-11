#include <iostream>
#include <cmath>
using namespace std;

struct Point
{
    float x, y;
};

int main()
{
    float distance;
    Point p1, p2;

    cout << "please enter x for the first point:\n";
    cin >> p1.x;
    cout << "please enter y for the first point:\n";
    cin >> p1.y;
    cout << "please enter x for the second point:\n";
    cin >> p2.x;
    cout << "please enter y for the second  point:\n";
    cin >> p2.y;

    distance = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));

    cout << "distance = " << distance << endl;

    return 0;
}