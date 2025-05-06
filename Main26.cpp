// Area of circle and circumference of circle.
#include <iostream>
#include <conio.h>
using namespace std;
class Circle
{
private:
    int R;

public:
    void getdata(int r)
    {
        R = r;
    }
    void printdata()
    {
        cout << "\nEnter a Radius = " << R << endl;
    }
    void Calcu();
};
void Circle::Calcu()
{
    float AR, CF;
    AR = (float)22 / 7 * R * R;
    CF = (float)2 * 22 / 7 * R;
    cout << "Area of a Circle = " << AR << endl;
    cout << "Circumference of a Circle = " << CF << endl;
};
int main()
{
    system("cls");
    Circle x;
    x.getdata(9);
    x.printdata();
    x.Calcu();
    getch();
}