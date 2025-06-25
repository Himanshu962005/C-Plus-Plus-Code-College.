// Write a C++ program to calculate factorial of given numbers using Constructor.
#include <iostream>
#include <conio.h>
using namespace std;
class Facto
{
private:
    int n;

public:
    Facto(int N)
    {
        n = N;
    }
    void printdata()
    {
        cout << "\nGiven number = " << n;
    }
    void Calsu(); // Function Declaration.
};
void Facto::Calsu() // Function Definition.
{
    int I;
    long F = 1;
    for (I = 1; I <= n; I++)
    {
        F = F * I;
    }
    cout << "\nFactorial Value = " << F;
}
int main()
{
    system("cls");
    Facto x(5); // Constructor Facto() called automatically when object is created.
    x.printdata();
    x.Calsu();
}
