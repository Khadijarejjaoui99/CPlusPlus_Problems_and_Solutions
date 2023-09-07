#include <iostream>
using namespace std;

struct stRectangle
{
    int Length, Width;
};

void ReadRectangleData(stRectangle &Rectangle)
{
    cout << "Please enter the length of the rectangle:\n";
    cin >> Rectangle.Length;
    cout << "Please enter the width of the rectangle:\n";
    cin >> Rectangle.Width;
}

int CalculateArea(stRectangle Rectangle)
{
    return Rectangle.Length * Rectangle.Width;
}

int CalculatePerimeter(stRectangle Rectangle)
{
    return 2 * Rectangle.Length + 2 * Rectangle.Width;
}

void DisplayRectangleData(stRectangle Rectangle)
{
    cout << "\n**************************************\n";
    cout << "Rectangle Length = " << Rectangle.Length << endl;
    cout << "Rectangle Width = " << Rectangle.Width << endl;
    cout << "Rectangle Area = " << CalculateArea(Rectangle) << endl;
    cout << "Rectangle Perimeter = " << CalculatePerimeter(Rectangle) << endl;
    cout << "**************************************\n";
}

void ReadRectangles(stRectangle Rectangles[2])
{
    ReadRectangleData(Rectangles[0]);
    ReadRectangleData(Rectangles[1]);
}
void DisplayRectangles(stRectangle Rectangles[2])
{
    DisplayRectangleData(Rectangles[0]);
    DisplayRectangleData(Rectangles[1]);
}
int main()
{
    stRectangle Rectangles[2];
    ReadRectangles(Rectangles);
    DisplayRectangles(Rectangles);

    return 0;
}