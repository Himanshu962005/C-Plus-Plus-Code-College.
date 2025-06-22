// WAP to find the Factorial of a given number using Recursion.
#include <iostream>
#include <conio.h>
using namespace std;
int fact(int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        return y * fact(y - 1);
    }
}
int main()
{
    system("cls");
    int x;
    cout << "Enter number : ";
    cin >> x;
    cout << "Factorial of " << x << " is " << fact(x);
    getch();
    return 0;
}