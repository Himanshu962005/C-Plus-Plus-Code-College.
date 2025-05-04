// Find Simple Interest using OOPS.
#include <iostream>
#include <conio.h>
using namespace std;
class simple
{
private:
    int P, T;
    float R;

public:
    void getdata(int p, float r, int t)
    {
        P = p;
        R = r;
        T = t;
    }
    void printddata()
    {
        cout << "Enter Principal Amount = " << P;
        cout << "\nEnter Rate of Interest = " << R;
        cout << "\nEnter Time = " << T;
    }
    void calc()
    {
        float SI;
        SI = P * R * T / 100;
        cout << "\nSimple Interest = " << SI;
    }
};
int main()
{
    system("cls");
    simple x;
    x.getdata(30, 3, 3.2);
    x.printddata();
    x.calc();
}