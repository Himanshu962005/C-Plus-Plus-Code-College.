// Addition 2 Number.
#include <iostream>
#include <conio.h>
using namespace std;
class ADD
{
    int A, B;

public:
    void getdata(int a, int b)
    {
        A = a;
        B = b;
    }
    void printdata()
    {
        cout << "First Number = " << A;
        cout << "\nSecond Number = " << B;
    }
    void calc()
    {
        int S;
        S = A + B;
        cout << "\nSum = " << S;
    }
};
int main()
{
    system("cls");
    ADD x;
    x.getdata(10, 20);
    x.printdata();
    x.calc();
}
