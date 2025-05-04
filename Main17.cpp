// Even or Odd.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int N;
    system("cls");
    cout << "Input a Number = ";
    cin >> N;
    if (N % 2 == 0)
    {
        cout << "Even Number";
    }
    else
    {
        cout << "Odd Number";
    }
    cout << "\nGood Day";
}