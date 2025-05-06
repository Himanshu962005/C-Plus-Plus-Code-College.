// Write a program to calculate area and circumference of the circle using Non-Parameterized constructor.
#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
private:
    int R;

public:
    Circle() // Non-parameterized constructor.
    {
        R = 9;
    }
    void diaplay()
    {
        cout << "Radius of circle = " << R << endl;
    }
    void area()
    {
        float AR = (float)22 / 7 * R * R;
        cout << "Area of Circle = " << AR;
    }
};
int main()
{
    system("cls");
    Circle x;
    x.diaplay();
    x.area();
    getch();
}