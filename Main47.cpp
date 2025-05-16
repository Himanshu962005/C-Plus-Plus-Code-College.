// Write a program to find sum of two number and it also calculate average of both using Multiple Inheritance.
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
class Sum : public One, public Two
{
public:
    void CalcSum()
    {
        int S = A + B;
        cout << "\nSum = " << S;
    }
};
class Average : public Sum
{
public:
    void CalcAvg()
    {
        float Avg = (float)(A + B) / 2;
        cout << "\nAverage = " << Avg;
    }
};
int main()
{
    system("cls");
    Average x;
    x.getdata(9);
    x.setdata(6);
    x.printdata();
    x.displaydata();
    x.CalcSum();
    x.CalcAvg();
    getch();
    return 0;
}
