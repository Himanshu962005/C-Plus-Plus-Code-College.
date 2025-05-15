// Calculate Area and Circumference of the circle using Hierarchical Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
public:
    int R;
    void getdata(int r)
    {
        R = r;
    }
    void printdata()
    {
        cout << "\n\nRadius of the circle = " << R;
    }
};
class Area : public Circle
{
public:
    void CalcArea()
    {
        float AR = (float)22 / 7 * R * R;
        cout << "\nArea = " << AR;
    }
};
class Circum : public Circle
{
public:
    void CalcCircum()
    {
        float CF = (float)2 * 22 / 7 * R;
        cout << "\nCircumference = " << CF;
    }
};
int main()
{
    system("cls");
    Area x;
    x.getdata(9);
    x.printdata();
    x.CalcArea();
    Circum y;
    y.getdata(6);
    y.printdata();
    y.CalcCircum();
    getch();
    return 0;
}