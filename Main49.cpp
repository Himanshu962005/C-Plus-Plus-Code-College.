// Write a program to overload -- operator.
#include <iostream>
#include <conio.h>
using namespace std;
class Overload
{
private:
    int CNT;

public:
    void getdata(int n)
    {
        CNT = n;
    }
    void printdata()
    {
        cout << "Counter = " << CNT << endl;
    }
    void operator--()
    {
        CNT = CNT - 1;
    }
};
int main()
{
    system("cls");
    Overload x;
    x.getdata(9);
    cout << "Before: ";
    x.printdata();
    --x;
    cout << "After: ";
    x.printdata();
    getch();
    return 0;
}