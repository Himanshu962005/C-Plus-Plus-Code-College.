// Write a C++ program to illustrate Function Overriding.
#include <iostream>
#include <conio.h>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "Function of Base Class"; // Overriding Function
    }
};
class Derived : public Base
{
public:
    void display()
    {
        cout << "Function of Derived Class"; // Overriding Function
    }
};
int main()
{
    system("cls");
    Derived obj;
    obj.display(); // Derived Class Version
    getch();
    return 0;
}