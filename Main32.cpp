// Calculating area of the circle using copy constructor.
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
    Circle(Circle &Z)
    {
        R = Z.R;
    }
    void printdata()
    {
        cout << "Radius of the Circle = " << R << endl;
    }
    void Calc()
    {
        float AR = (float)22 / 7 * R * R;
        cout << "Area = " << AR << endl
             << endl;
    }
};
int main()
{
    system("cls");
    Circle x(9); // Calling parameterized Constructor.
    x.printdata();
    x.Calc(); // Calling Copy constructor.
    Circle y(x);
    y.printdata();
    y.Calc();
    getch();
}