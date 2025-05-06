// Write a C++ program to illustrate a Destructor.
#include <iostream>
#include <conio.h>
using namespace std;
class DEMO
{
public:
    DEMO() // Constructor
    {
        cout << "Object is Created\n";
    }
    ~DEMO() // Destructor
    {
        cout << "Object is Destroyed\n";
    }
};
int main()
{
    system("cls");
    DEMO x;
    getch();
}