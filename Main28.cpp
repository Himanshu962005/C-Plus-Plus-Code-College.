// Addition of 2 number using Constructor.
#include <iostream>
#include <conio.h>
using namespace std;
class ADD
{
private:
    int A, B;

public:
    ADD(int a, int b)
    {
        A = a;
        B = b;
    }
    void printdata()
    {
        cout << "First Number = " << A << endl;
        cout << "Second Number = " << B << endl;
    }
    void Calcu()
    {
        int S;
        S = A + B;
        cout << "Sum = " << S;
    }
};
int main()
{
    system("cls");
    ADD x(60, 9);
    x.printdata();
    x.Calcu();
    getch();
}