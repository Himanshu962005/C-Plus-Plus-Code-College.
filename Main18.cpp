// Addition 2 Number.
#include <iostream>
#include <conio.h>
using namespace std;
class ADD
{
private:
    int A, B;

public:
    void getdata()
    {
        cout << "Input First Number = ";
        cin >> A;
        cout << "Input Second Number = ";
        cin >> B;
    }
    void Calc()
    {
        int S;
        S = A + B;
        cout << "Sum = " << S;
    }
};
int main()
{
    system("cls");
    ADD x;
    x.getdata();
    x.Calc();
}