// C++ program for Insertion sort.
#include <iostream>
#include <conio.h>
using namespace std;
// Insertion sort function definition
void insert_sort(int a[], int size)
{
    int i, temp, j;
    for (i = 1; i < size; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}
int main()
{
    system("cls");
    int arr[10], i, k;
    cout << "Enter 10 values =\n";
    for (i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    // call of Insertion Sort function
    insert_sort(arr, 10);
    cout << "\nSorted Values = ";
    for (i = 0; i < 10; i++)
    {
        cout << endl
             << arr[i];
    }
    getch();
    return 0;
}