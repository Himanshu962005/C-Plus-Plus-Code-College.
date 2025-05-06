// Example of pointer in C++.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int x = 10;
    int *p; // Declare a pointer to an integer.
    system("cls");
    p = &x;                               // Assign the address of x to p.
    cout << "Value of x : " << x << endl; // output 10
    cout << "Address of x : " << &x << endl;
    cout << "Value pointer to by p : " << *p;
    getch();
}