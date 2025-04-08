// Overloading a sum function.
#include <iostream>
#include <conio.h>
using namespace std;
class Test
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int sum(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    system("cls");
    Test obj;
    cout << "Sum of 2 integers: " << obj.sum(310, 220) << endl;
    cout << "Sum of 3 integers: " << obj.sum(310, 220, 110) << endl;
}