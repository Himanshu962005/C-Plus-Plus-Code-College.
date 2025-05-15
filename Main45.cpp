// Calculate Area for both square and circle using Hierarchical Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class Shape
{
public:
    int N;
    void getdata(int n)
    {
        N = n;
    }
    void printdata()
    {
        cout << N;
    }
};
class Square : public Shape
{
public:
    void Area()
    {
        int AR = N * N;
        cout << "\nArea of Circle = " << AR;
    }
};
class Circle : public Shape
{
public:
    void Area()
    {
        float AR = (float)22 / 7 * N * N;
        cout << "\nArea of Circle = " << AR;
    }
};
int main()
{
    system("cls");
    Square x;
    x.getdata(9);
    cout << "\nSide of the Square = ";
    x.printdata();
    x.Area();
    Circle y;
    y.getdata(6);
    cout << "\n\nRadius of Circle = ";
    y.printdata();
    y.Area();
    getch();
    return 0;
}