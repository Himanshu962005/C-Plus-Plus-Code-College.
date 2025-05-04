// Input a Number and Calculate its Factorial value.
#include <iostream>
#include <conio.h>
using namespace std;
class FACTO
{
private:
    int N;

public:
    void getdata(int n)
    {
        N = n;
    }
    void printdata()
    {
        cout << "Given Number = " << N;
    }
    void Calc(); // Function Declaration
};
void FACTO::Calc()
{
    int I;
    long int F = 1;
    for (I = N; I >= 1; I--)
    {
        F = F * I;
    }
    cout << "\nFactorial value = " << F;
}
int main()
{
    system("cls");
    FACTO x;
    x.getdata(5);
    x.printdata();
    x.Calc();
}