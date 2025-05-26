// Area of square & rectangle : Contractor Overloading.
#include <iostream>
#include <conio.h>
using namespace std;
class Shape
{
private:
    int L, W;

public:
    Shape(int l, int w) // For Rectangle.
    {
        L = l;
        W = w;
    }
    Shape(int Side) // For Square.
    {
        L = Side;
        W = Side;
    }
    void Area()
    {
        int AR = L * W;
        cout << "Area = " << AR << endl
             << endl;
    }
};
int main()
{
    system("cls");
    Shape x(9);
    cout << "Square : ";
    x.Area();
    Shape y(9, 6);
    cout << "Rectangle : ";
    y.Area();
    getch();
    return 0;
}