// C++ program to print Fibonacci series using Recursive Function.
#include <iostream>
#include <conio.h>
using namespace std;
int fibonacci(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2)); // Recursive call of Fibonacci Function.
    }
}
int main()
{
    system("cls");
    int n, i;
    cout << "Enter number of terms for Fibonacci Series : ";
    cin >> n;
    cout << "Fibonacci Series" << endl;
    for (i = 0; i < n; i++)
    {
        cout << " " << fibonacci(i);
    }
    getch();
    return 0;
}