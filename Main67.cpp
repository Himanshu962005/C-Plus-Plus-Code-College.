// C++ program to implement Stack using Array.
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 5
// Stack class declaration
class stack
{
private:
    int top;
    int ele[MAX];

public:
    stack() // Default Constructor
    {
        top = -1;
    }
    void push(int item) // PUSH function
    {
        if (top == MAX - 1)
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top++;
            ele[top] = item;
            cout << "\nInserted value is : " << item;
        }
    }
    int pop() // POP function
    {
        int item;
        if (top == -1)
        {
            cout << "\nStack Underflow";
        }
        else
        {
            item = ele[top];
            top--;
        }
        return item;
    }
    void display() // DISPLAY function
    {
        if (top == -1)
        {
            cout << "\nStack Underflow";
        }
        else
        {
            int i;
            cout << "Stack value are " << endl;
            for (i = top; i >= 0; i--)
            {
                cout << ele[i] << endl;
            }
        }
    }
}; // class closed
int main()
{
    system("cls");
    int item = 0, choice, value;
    char ans;
    stack s = stack();
    do
    {
        cout << "1. Push" << endl
             << "2. Pop" << endl
             << "3. Display" << endl
             << "4. Exit";
        cout << "\n\nEnter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the value to be insert : ";
            cin >> value;
            s.push(value);
            break;
        case 2:
            value = s.pop();
            cout << "\nDeleted value is " << value;
            break;
        case 3:
            s.display();
            break;
        case 4:
            // exit(0);
        default:
            cout << "Invalid choice";
        }
        cout << "\nDo you want to continue(y / n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    getch();
    return 0;
}