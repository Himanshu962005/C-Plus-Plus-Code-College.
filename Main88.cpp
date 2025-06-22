// WAP to find Fibonacci series using Recursion.
#include <iostream>
#include <conio.h>
using namespace std;
void fibonacci(int n)
{
    static int n1 = 0, n2 = 1, n3;
    if (n > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        cout << n3 << " ";
        fibonacci(n - 1);
    }
}
int main()
{
    system("cls");
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;
    cout << "Fibonacci series : ";
    if (n >= 1)
    {
        cout << "0 ";
    }
    if (n >= 2)
    {
        cout << "1 ";
    }
    fibonacci(n - 2);
    getch();
    return 0;
}