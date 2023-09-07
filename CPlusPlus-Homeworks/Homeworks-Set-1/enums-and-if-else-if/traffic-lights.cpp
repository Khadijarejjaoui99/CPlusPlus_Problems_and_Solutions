#include <iostream>
using namespace std;

enum enTrafficLights
{
    Red = 1,
    Green = 2,
    Yellow = 3
};

int main()
{
    int C;
    enTrafficLights TrafficLight;
    cout << "***********************************\n";
    cout << "Traffic Light Stimulator\n";
    cout << "***********************************\n";
    cout << "Please enter your color choice:\n";
    cout << "(1) Red\n";
    cout << "(2) Green\n";
    cout << "(3) Yellow\n";
    cout << "Your choice: ";
    cin >> C;

    TrafficLight = (enTrafficLights)C;

    if (TrafficLight == enTrafficLights::Red)
    {
        system("color 4F");
        cout << "Stop.\n";
    }
    else if (TrafficLight == enTrafficLights::Green)
    {
        system("color 2F");
        cout << "Go.\n";
    }
    else if (TrafficLight == enTrafficLights::Yellow)
    {
        system("color 6F");
        cout << "Caution.\n";
    }
    else
        cout << "Invalid choice.Please select a valid color.\n";

    return 0;
}