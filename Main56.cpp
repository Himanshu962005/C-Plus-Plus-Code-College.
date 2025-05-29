// Addition of 2 Numbers : Friend Function.
#include <iostream>
#include <conio.h>
using namespace std;
class Two; // Class Declaration.
class One
{
private:
    int A;

public:
    void getdata(int a)
    {
        A = a;
    }
    void printdata()
    {
        cout << "\nFirst Number = " << A;
    }
    friend void Sum(One p, Two q);
};
class Two
{
private:
    int B;

public:
    void setdata(int b)
    {
        B = b;
    }
    void displaydata()
    {
        cout << "\nSecond Number = " << B;
    }
    friend void Sum(One p, Two q);
};
void Sum(One p, Two q)
{
    int S = p.A + q.B;
    cout << "\nSum = " << S;
}
int main()
{
    system("cls");
    One x;
    x.getdata(9);
    x.printdata();
    Two y;
    y.setdata(6);
    y.displaydata();
    Sum(x, y);
    getch();
    return 0;
}