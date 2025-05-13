// Write a C++ program to find sum of 2 numbers with different sets using function overloading.
#include <iostream>
#include <conio.h>
using namespace std;
void Sum(int A, int B)
{
    int S = A + B;
    cout << "\nSum of two interger numbers = " << S;
}
void Sum(float A, float B)
{
    float S = A + B;
    cout << "\nSum of two real numbers = " << S;
}
void Sum(int A, int B, int C)
{
    int S = A + B + C;
    cout << "\nSum of three integer numbers = " << S;
}
int main()
{
    system("cls");
    cout << "An Example of Function overloading";
    Sum(10, 20);
    Sum(5.2f, 1.7f);
    Sum(3, 4, 5);
    getch();
    return 0;
}