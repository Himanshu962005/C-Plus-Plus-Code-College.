// Sum and Avg of 3 Numbers using Multi-Level Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class Number
{
public:
    int A, B, C;
    void getdata(int a, int b, int c)
    {
        A = a;
        B = b;
        C = c;
    }
    void printdata()
    {
        cout << "\nFirst Number = " << A;
        cout << "\nSecond Number = " << B;
        cout << "\nThird Number = " << C;
    }
};
class Sum : public Number
{
public:
    void CalcSum()
    {
        int S = A + B + C;
        cout << "\nSum = " << S;
    }
};
class Average : public Sum
{
public:
    void CalcAvg()
    {
        float AVG = (float)(A + B + C) / 3;
        cout << "\nAverage = " << AVG;
    }
};
int main()
{
    system("cls");
    Average x;
    x.getdata(3, 4, 9);
    x.printdata();
    x.CalcSum();
    x.CalcAvg();
    getch();
    return 0;
}