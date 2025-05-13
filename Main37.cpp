// Write a C++ program to calculate area of the circle using parameterized constructor.
#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
private:
    int R;

public:
    Circle(int r)
    {
        R = r;
    }
    void printdata()
    {
        cout << "Enter a Radius = " << R << endl;
    }
    void calc()
    {
        float AR = (float)22 / 7 * R * R;
        cout << "Area of Circle = " << AR;
    }
};
int main()
{
    system("cls");
    Circle x(9);
    x.printdata();
    x.calc();
    getch();
    return 0;
}