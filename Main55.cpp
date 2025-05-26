// Area of Circle : Friend Function.
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
        cout << "Radius of the Circle = " << R << endl;
    }
    friend void area(Circle y);
};
void area(Circle y)
{
    float AR = (float)22 / 7 * y.R * y.R;
    cout << "Area of the Circle = " << AR;
}
int main()
{
    system("cls");
    Circle x;
    x.getdata(9);
    x.printdata();
    area(x);
    getch();
    return 0;
}