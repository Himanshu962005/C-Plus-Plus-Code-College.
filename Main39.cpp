// Linear Search in C++.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int N[10], I, SN, CNT = 0;
    system("cls");
    cout << "Input any 10 number for an array =\n";
    for (I = 0; I <= 9; I++)
    {
        cin >> N[I];
    }
    cout << "Input a number to be searched in array = ";
    cin >> SN;
    for (I = 0; I <= 9; I++)
    {
        if (SN == N[I])
        {
            CNT++;
        }
    }
    if (CNT == 0)
    {
        cout << "Number not found in array = ";
    }
    else
    {
        cout << "Number found in array times " << CNT;
    }
    cout << ("\nGood Day");
    getch();
    return 0;
}