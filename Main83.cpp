// C++ program of Pointers with Arrays.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int arr[5], i, *ptr;
    ptr = arr; // PTR pointer is holding address of arr[0] element.
    cout << "Enter 5 numbers : ";
    for (i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "\nArray values using pointer" << endl;
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << endl; // *(ptr+i) will print array values.
    }
    getch();
    return (0);
}