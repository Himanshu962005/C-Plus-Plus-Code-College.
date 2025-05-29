// Addition of 2 Number : Friend Class.
#include <iostream>
#include <conio.h>
using namespace std;
class Demo
{
private:
    int A, B;

public:
    void getdata(int a, int b)
    {
        A = a;
        B = b;
    }
    void printdata()
    {
        cout << "\nFirst Number = " << A;
        cout << "\nSecond Number = " << B;
    }
    friend class Hello; // Declaring Friend Class.
};
class Hello
{
public:
    void Sum(Demo y)
    {
        int S = y.A + y.B;
        cout << "\nSum = " << S;
    }
};
int main()
{
    system("cls");
    Demo x;
    x.getdata(9, 6);
    x.printdata();
    Hello h;
    h.Sum(x);
    getch();
    return 0;
}