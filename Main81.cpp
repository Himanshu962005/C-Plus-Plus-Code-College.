// Basic file operations.
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    system("cls");
    ofstream file1;
    file1.open("data.txt");
    file1 << "My Name is Himanshu Legenday Blader.\n";
    file1.close();
    getch();
    return (0);
}