// Sum of Matrix 3x3 in C++.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int A[3][3], R, C, S = 0;
    system("cls");
    cout << "Input Elements for Matrix A 3x3 =\n";
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            cin >> A[R][C];
        }
    }
    cout << "\nMatrix A = \n";
    for (R = 0; R <= 2; R++)
    {
        for (C = 0; C <= 2; C++)
        {
            cout << A[R][C] << "\t";
            S = S + A[R][C];
        }
        cout << endl;
    }
    cout << "Sum of all Matrix Elements = " << S;
    getch();
    return 0;
}