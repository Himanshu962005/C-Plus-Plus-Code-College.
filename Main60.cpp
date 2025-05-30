// C++ program for Quick sort.
#include <iostream>
#include <conio.h>
using namespace std;
void quick_sort(int a[], int first, int last)
{
    int low, high, pivot, temp, i;
    low = first;
    high = last;
    pivot = a[(first + last) / 2];
    do
    {
        while (a[low] < pivot)
        {
            low++;
        }
        while (a[high] > pivot)
        {
            high--;
        }
        if (low <= high)
        {
            temp = a[low];
            a[low] = a[high];
            a[high] = temp;
            low++;
            high--;
        }
    } while (low <= high);
    if (first < high)
    {
        quick_sort(a, first, high);
    }
    if (low < last)
    {
        quick_sort(a, low, last);
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
    // call of Quick Sort function
    quick_sort(arr, 0, 10);
    cout << "\nSorted Values = ";
    for (i = 0; i < 10; i++)
    {
        cout << endl
             << arr[i];
    }
    getch();
    return 0;
}