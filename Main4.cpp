// C++ Program to scan and print values using array.
#include <iostream>
#include <conio.h>
int main ()
{
    int arr[5],i;
    system("cls");
    std::cout<<"Enter 5 numbers: \n";
    for(i=0;i<5;i++)
    std::cin >> arr[i];
    std::cout<<"\n Array values are "<<std::endl;
    for(i=0;i<5;i++)
    std::cout<<arr[i]<<std::endl;
    std::cin.get();
    return 0;
}