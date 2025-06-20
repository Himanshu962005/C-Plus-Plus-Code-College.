// C++ program to get and print student data using Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
private: // scope of variables is private.
    int rno;
    char name[10];

public: // scope of functions is public.
    // member functions.
    void input()
    {
        cout << "Enter student roll number : ";
        cin >> rno;
        cout << "\nEnter student name : ";
        cin >> name;
    }
    void display()
    {
        cout << "\nRoll Number : " << rno;
        cout << "\nName : " << name;
    }
};
class fee : public student // class fee (derived) class is inheriting student (base) class.
{
    float fee; // default scope in private.
public:
    void input_data()
    {
        input(); // call of input function of student class.
        cout << "\nEnter Fee : ";
        cin >> fee;
    }
    void display_data()
    {
        display(); // call of display function of student class.
        cout << "\nFee : " << fee;
    }
};
int main()
{
    system("cls");
    fee obj; // object of fee class.
    obj.input_data();
    obj.display_data();
    getch();
    return (0);
}