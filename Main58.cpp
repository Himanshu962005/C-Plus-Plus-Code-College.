// C++ program for Selection sort.
#include <iostream>
#include <conio.h>
using namespace std;
void selection_sort(int a[], int size)
{
    int temp, i, j, min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i; // considering element i as minimum
        for (int j = i + 1; j < size; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main()
{
    system("cls");
    int arr[10], i;
    cout << "Enter 10 values = \n";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    // call of selection sort function
    selection_sort(arr, 10);
    cout << "\nSorted Values = ";
    for (i = 0; i < 10; i++)
    {
        cout << endl
             << arr[i];
    }
    getch();
    return 0;
}