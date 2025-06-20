// C++ sample program for Constructor and Destructor.
#include <iostream>
#include <conio.h>
using namespace std;
class student
{
private:
    // Member Variables.
    int Rollno;
    char Name[10];

public:
    // Constructor.
    student()
    {
        cout << "Constructor \n";
        Rollno = 0;
    }
    // Member Functions.
    void input()
    {
        cout << "\n Enter student Roll number : ";
        cin >> Rollno;
        cout << "\n Enter student Name : ";
        cin >> Name;
    }
    void display()
    {
        cout << "\n Roll Number : " << Rollno;
        cout << "\n Name : " << Name << endl;
    }
    // destructor
    ~student()
    {
        cout << "\nDestructor \n";
    }
};
int main()
{
    system("cls");
    student obj;
    obj.input();
    obj.display();
    getch();
    return (0);
}