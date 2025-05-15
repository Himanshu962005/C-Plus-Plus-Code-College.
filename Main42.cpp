// Area and Circumference of the circle: Simple Inheritance.
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
        cout << "\nRadius of the circle = " << R;
    }
    void Area()
    {
        float AR = (float)22 / 7 * R * R;
        cout << "\nArea = " << AR;
    }
};
class MyCircle : public Circle
{
public:
    void Circum()
    {
        float CF = (float)2 * 22 / 7 * R;
        cout << "\nCircumference = " << CF;
    }
};
int main()
{
    system("cls");
    MyCircle x;
    x.getdata(9);
    x.printdata();
    x.Area();
    x.Circum();
    getch();
    return 0;
}