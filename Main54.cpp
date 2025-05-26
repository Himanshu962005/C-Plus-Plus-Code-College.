// Example program for Friend Function.
#include <iostream>
#include <conio.h>
using namespace std;
class Demo
{
private:
    int ID;
    char Gender;

public:
    void getdata(int id, char gen)
    {
        ID = id;
        Gender = gen;
    }
    friend void display(Demo y);
};
void display(Demo y)
{
    cout << "\nMy ID = " << y.ID;
    cout << "\nMy Gender = " << y.Gender;
}
int main()
{
    system("cls");
    Demo x;
    x.getdata(2005, 'M');
    display(x);
    getch();
    return 0;
}