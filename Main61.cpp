// C++ program for Merge sort.
#include <iostream>
#include <conio.h>
using namespace std;
// Function to merge the two half into a sorted data.
void merge_array(int a[], int low, int high, int mid)
{
    // low to mid and mid+1 to high array are already sorted
    int i, j, k;
    int temp_arr[high - low + 1];
    i = low;
    k = 0;
    j = mid + 1;
    while (i <= mid && j <= high) // merging of two parts into temp array
    {
        if (a[i] < a[j])
        {
            temp_arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            temp_arr[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid) // insertion of remaining values from i to mid into temp array.
    {
        temp_arr[k] = a[i];
        k++;
        i++;
    }
    while (j <= high) // insertion of remaining values from j to high into temp array.
    {
        temp_arr[k] = a[j];
        k++;
        j++;
    }
    // assign sorted data stored in temp array to an array
    for (i = low; i <= high; i++)
    {
        a[i] = temp_arr[i - low];
    }
}
// A function to split array into two parts.
void merge_sort(int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        // split array into two parts
        merge_sort(a, low, mid);
        merge_sort(a, mid + 1, high);
        // merge arraythem to get sorted values
        merge_array(a, low, high, mid);
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
    // call of merge sort function
    merge_sort(arr, 0, 9);
    cout << "\nSorted Values = ";
    for (i = 0; i < 10; i++)
    {
        cout << endl
             << arr[i];
    }
    getch();
    return 0;
}