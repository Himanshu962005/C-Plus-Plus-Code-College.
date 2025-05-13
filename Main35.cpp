// Sum of 2 numbers using OOPS.
#include <iostream>
#include <conio.h>
using namespace std;
class ADD
{
public:
    int A, B;
    void getdata(int P, int Q)
    {
        A = P;
        B = Q;
    }
    void printdata()
    {
        cout << "\nFirst Number = " << A;
        cout << "\nSecond Number = " << B;
    }
};
class MyAdd : public ADD
{
public:
    void calc()
    {
        int S = A + B;
        cout << "\nSumm = " << S;
    }
};
int main()
{
    system("cls");
    MyAdd x;
    x.getdata(10, 20);
    x.printdata();
    x.calc();
    getch();
    return 0;
}