// Write a C++ program for Additional & Multiplication of 2 number using inline function.
#include <iostream>
#include <conio.h>
using namespace std;
inline int sum(int P, int Q)
{
    return (P + Q);
}
inline int multiply(int P, int Q)
{
    return (P * Q);
}
int main()
{
    int A, B, ANS1, ANS2;
    system("cls");
    cout << "Input First Number = ";
    cin >> A;
    cout << "Input Second Number = ";
    cin >> B;
    ANS1 = sum(A, B);
    ANS2 = multiply(A, B);
    cout << "\nSum of Numbers = " << ANS1;
    cout << "\nMultiply of Numbers = " << ANS2;
}