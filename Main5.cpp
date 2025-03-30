// C++ program to print the largest number in an array.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[5], i, max, min;
    system("cls");
    cout << "Enter 5 numbers: \n";
    for (i = 0; i < 5; i++)
        cin >> arr[i];
    max = arr[0];
    min = arr[0];
    for (i = 1; i < 5; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    cout << "The largest element = " << max;
    cout << "\nThe Smallest element = " << min;
    getch();
    return 0;
}
