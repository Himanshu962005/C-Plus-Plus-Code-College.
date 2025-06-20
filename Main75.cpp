// C++ sample program for Static Variable.
#include <iostream>
#include <conio.h>
using namespace std;
void test()
{
    // Static Variable.
    static int count = 0;
    cout << count << endl;
    count++;
}
int main()
{
    system("cls");
    cout << "Static variable " << endl;
    for (int i = 0; i < 5; i++)
    {
        test();
    }
    getch();
    return (0);
}