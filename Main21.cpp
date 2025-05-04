// Testing Even or Odd OOPS.
#include <iostream>
#include <conio.h>
using namespace std;
class EVENODD
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
        cout << "Enter a Number = " << N;
    }
    void test()
    {
        if (N % 2 == 0)
        {
            cout << "Number is Even";
        }
        else
        {
            cout << "\nNumber is Odd";
        }
    }
};
int main()
{
    system("cls");
    EVENODD x;
    x.getdata(7);
    x.printdata();
    x.test();
}