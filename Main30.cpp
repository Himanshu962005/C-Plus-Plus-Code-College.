// Write a program to calculate area and circumference of the circle using constructor.
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
        cout << "Enter a Radius  = " << R << endl;
    }
    void Calcu();
};
void Circle::Calcu()
{
    float AR, CF;
    AR = (float)22 / 7 * R * R;
    CF = (float)2 * 22 / 7 * R;
    cout << "Area of a Circle = " << AR << endl;
    cout << "Circumference of a Cirlce = " << CF << endl;
};
int main()
{
    system("cls");
    Circle x(9);
    x.printdata();
    x.Calcu();
    getch();
}