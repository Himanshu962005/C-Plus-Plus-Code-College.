// C++ program for Binary Search.
#include <iostream>
#include <conio.h>
using namespace std;
// Binary Search Function
void binary_search(int a[], int size, int key)
{
    int low, high, mid, flag;
    flag = 0;
    low = 0;
    high = size - 1;
    while (low <= high && flag == 0)
    {
        mid = (low + high) / 2;
        if (key == a[mid])
        {
            flag = 1;
            break;
        }
        else if (key < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (flag == 1)
    {
        cout << "value found at location = " << mid + 1;
    }
    else
    {
        cout << "value not found";
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
    cout << "Enter value to be searched = ";
    cin >> k;
    // call of binary_Search function
    binary_search(arr, 10, k);
    getch();
    return 0;
}