// C++ program to print table of any number using do while loop.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int num, i;
    cout << "Enter any number : ";
    cin >> num;
    cout << "\nTable of " << num << endl;
    i = 1;
    do
    {
        cout << num * i << endl;
        i++;
    } while (i <= 10);
    getch();
    return 0;
}