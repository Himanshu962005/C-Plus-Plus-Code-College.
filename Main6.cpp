// C++ Program Addition, Substraction and Multiplication of two matrices.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i, j, m1[3][3], m2[3][3], sum[3][3], sub[3][3], mul[3][3];
    system("cls");
    cout << "Enter the elements of First matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m1[i][j];
        }
    }
    cout << "Enter of First matrices are" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m1[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Enter the elements of Second matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cin >> m2[i][j];
        }
    }
    cout << "Enter of Second matrices are" << endl;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << m2[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Sum of two matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sum[i][j] = m1[i][j] + m2[i][j];
            cout << sum[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Sub of two matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sub[i][j] = m1[i][j] - m2[i][j];
            cout << sub[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "Mul of two matrices\n";
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            mul[i][j] = m1[i][j] * m2[i][j];
            cout << mul[i][j] << "\t";
        }
        cout << endl;
    }
    getch();
}
