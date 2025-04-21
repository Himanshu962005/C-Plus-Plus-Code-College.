// Addition and Subtraction in Arrays.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int A[3], B[3], i, sum[3], diff[3];
    system("cls");
    cout << "Enter 3 elements of first array =\n";
    for (i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    cout << "\nEnter 3 elements of first array are =\n";
    for (i = 0; i < 3; i++)
    {
        cout << A[i] << "\t";
    }
    cout << "\nEnter 3 elements of second array =\n";
    for (i = 0; i < 3; i++)
    {
        cin >> B[i];
    }
    cout << "\nEnter 3 elements of second array are =\n";
    for (i = 0; i < 3; i++)
    {
        cout << B[i] << "\t";
    }
    cout << "\nAddition of two arrays are =\n";
    for (i = 0; i < 3; i++)
    {
        sum[i] = A[i] + B[i];
        cout << sum[i] << "\t";
    }
    cout << "\nSubtraction of two arrays are =\n";
    for (i = 0; i < 3; i++)
    {
        diff[i] = A[i] - B[i];
        cout << diff[i] << "\t";
    }
    getch();
}