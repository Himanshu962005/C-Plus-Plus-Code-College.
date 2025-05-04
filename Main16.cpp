// Write a C++ program to calculate Simple Interest.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int P, T;
    float R, SI;
    system("cls");
    cout << "Enter a Principal Amount = ";
    cin >> P;
    cout << "Enter a Rate of Interest = ";
    cin >> R;
    cout << "Enter a Time = ";
    cin >> T;
    SI = P * R * T / 100;
    cout << "Simple Interest = " << SI;
    cout << "\nGood Day";
}