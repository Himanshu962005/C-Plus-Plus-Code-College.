// Write a program to calculate factorial of given number using constructor.
#include <iostream>
#include <conio.h>
using namespace std;
class Facto
{
private:
    int N;

public:
    Facto(int n)
    {
        N = n;
    }
    void printdata()
    {
        cout << "Given Number = " << N << endl;
    }
    void Calcu();
};
void Facto::Calcu()
{
    int I;
    long F = 1;
    for (I = N; I >= 1; I--)
    {
        F = F * I;
    }
    cout << "Factorial Value = " << F;
}
int main()
{
    system("cls");
    Facto x(9);
    x.printdata();
    x.Calcu();
    getch();
}