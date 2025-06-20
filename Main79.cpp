// C++ program to print factorial using Recursive Function.
#include <iostream>
#include <conio.h>
using namespace std;
// Factorial Function.
int factorial(int n)
{
    if (n > 1)
    {
        return n * factorial(n - 1); // Recursive call of Factorial Function.
    }
    else
    {
        return 1;
    }
}
int main()
{
    system("cls");
    int n;
    cout << "Enter a number : ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n);
    getch();
    return (0);
}