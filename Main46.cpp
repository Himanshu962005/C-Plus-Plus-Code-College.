// Find Addition of two Number using Multiple Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class One
{
public:
    int A;
    void getdata(int a)
    {
        A = a;
    }
    void printdata()
    {
        cout << "\nFirst Number = " << A;
    }
};
class Two
{
public:
    int B;
    void setdata(int b)
    {
        B = b;
    }
    void displaydata()
    {
        cout << "\nSecond Number = " << B;
    }
};
class Add : public One, public Two
{
public:
    void Calc()
    {
        int S = A + B;
        cout << "\nAddition of two Number = " << S;
    }
};
int main()
{
    system("cls");
    Add x;
    x.getdata(9);
    x.setdata(6);
    x.printdata();
    x.displaydata();
    x.Calc();
    getch();
    return 0;
}