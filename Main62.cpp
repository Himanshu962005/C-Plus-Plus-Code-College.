// C++ program for Radix sort.
#include <iostream>
#include <conio.h>
using namespace std;
// Function to get the maximum value in the array
int getMax(int a[], int size)
{
    int mx = a[0];
    for (int i = 1; i < size; i++)
    {
        if (a[i] > mx)
        {
            mx = a[i];
        }
    }
    return mx;
}
// A function to do counting sort of a[] according to the digit represented by exp
void countSort(int a[], int size, int exp)
{
    const int BASE = 10;
    int output[size]; // output array
    int count[BASE] = {0};
    // Store count of occurrences in count[]
    for (int i = 0; i < size; i++)
    {
        count[(a[i] / exp) % BASE]++;
    }
    // Change count[i] so that count[i] now contains actual position
    for (int i = 1; i < BASE; i++)
    {
        count[i] += count[i - 1];
    }
    // Build the output array
    for (int i = size - 1; i >= 0; i--)
    {
        int digit = (a[i] / exp) % BASE;
        output[count[digit] - 1] = a[i];
        count[digit]--;
    }
    // Copy the output array to a[], so that a[] now contains sorted numbers
    for (int i = 0; i < size; i++)
    {
        a[i] = output[i];
    }
}
// Main Radix Sort function
void radix_sort(int a[], int size)
{
    // Find the maximum number to know number of digits
    int m = getMax(a, size);
    // Do counting sort for every digit. Note that exp is 10^i
    for (int exp = 1; m / exp > 0; exp *= 10)
    {
        countSort(a, size, exp);
    }
}
int main()
{
    system("cls");
    const int N = 10;
    int arr[N];
    cout << "Enter " << N << " integer values =\n";
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    // Sort the array using Radix Sort
    radix_sort(arr, N);
    cout << "\nSorted Values = ";
    for (int i = 0; i < N; i++)
    {
        cout << endl
             << arr[i];
    }
    getch();
    return 0;
}