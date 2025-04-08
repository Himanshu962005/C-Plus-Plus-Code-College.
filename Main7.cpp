// C++ Sample Program for Class and Object.
#include <iostream>
#include <conio.h>
using namespace std;
class Student
{
private: // Scope  of Variables.
    int Rollno;
    char name[10];

public:
    void input()
    {
        cout << "\nEnter Student Roll No: ";
        cin >> Rollno;
        cout << "\nEnter Student Name: ";
        cin >> name;
    }
    void display()
    {
        cout << "\nRoll Number: " << Rollno;
        cout << "\nName: " << name;
    }
};
int main()
{
    system("cls");
    Student Obj;
    Obj.input();
    Obj.display();
    getch();
}