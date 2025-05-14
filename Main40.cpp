// Bubble sort in C++.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int N[10], I, T, P;
    system("cls");
    cout << "Input any 10 numbers for an array =\n";
    for (I = 0; I <= 9; I++)
    {
        cin >> N[I];
    }
    for (P = 0; P <= 8; P++)
    {
        for (I = 0; I <= 8 - P; I++)
        {
            if (N[I] > N[I + 1])
            {
                T = N[I];
                N[I] = N[I + 1];
                N[I + 1] = T;
            }
        }
    }
    cout << "\nArray in ascending order = ";
    for (I = 0; I <= 9; I++)
    {
        cout << N[I];
    }
    cout << "\nBubble sort";
    getch();
    return 0;
}