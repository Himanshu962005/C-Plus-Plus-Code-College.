// Write a C++ program to calculate area of the circle using a Friend function.
#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
private:
    int r;

public:
    void getdata(int R)
    {
        r = R;
    }
    void display()
    {
        cout << "\nRadius of Circle = " << r;
    }
    friend void area(Circle c);
};
void area(Circle c)
{
    float ar = (float)22 / 7 * c.r * c.r;
    cout << "\nArea of Circle = " << ar;
}
int main()
{
    system("cls");
    Circle x;
    x.getdata(5);
    x.display();
    area(x);
}