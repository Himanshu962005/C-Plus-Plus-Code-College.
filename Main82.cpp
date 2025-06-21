// C++ program of writing on a Text File.
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
    system("cls");
    ofstream file_out;
    char file_name[20];
    char str[80];
    system("cls");
    cout << "Enter file name to be created ";
    cin >> file_name;
    // Create a new file in output mode.
    file_out.open(file_name, ios::out);
    cout << "Enter data to be stored ";
    cin >> str;
    file_out << str;
    cout << "Information stored in file ";
    // Close file.
    file_out.close();
    getch();
    return (0);
}