// C++ Program to scan and print values using array.
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int arr[5], i;
    system("cls");
    cout << "Enter 5 numbers: \n";
    for (i = 0; i < 5; i++)
        cin >> arr[i];
    cout << "\n Array values are " << endl;
    for (i = 0; i < 5; i++)
        cout << arr[i] << std::endl;
    cin.get();
    return 0;
}
