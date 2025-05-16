// Overloading -Unary Operator.
#include <iostream>
#include <conio.h>
using namespace std;
class Overload
{
private:
    int A, B, C;

public:
    void getdata(int a, int b, int c)
    {
        A = a;
        B = b;
        C = c;
    }
    void printdata()
    {
        cout << A << " ";
        cout << B << " ";
        cout << C << " " << endl;
    }
    void operator-()
    {
        A = -A;
        B = -B;
        C = -C;
    }
};
int main()
{
    system("cls");
    Overload x;
    x.getdata(4, -5, 6);
    cout << "Before: ";
    x.printdata();
    -x;
    cout << "After: ";
    x.printdata();
    getch();
    return 0;
}