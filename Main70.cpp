// C++ program for Stack implementation using Linked List.
#include <iostream>
#include <conio.h>
using namespace std;
// structure for NODE
struct NODE
{
    int data;
    NODE *next;
};
class STACK
{
private:
    NODE *top, *temp, *curr;

public:
    STACK()
    {
        top = NULL;
    }
    void push(int d) // PUSH Function to insert value to Stack
    {
        temp = new NODE; // allocate memory to new node
        temp->data = d;
        if (temp == NULL)
        {
            cout << "Overflow";
        }
        else if (top == NULL)
        {
            top = temp;
            top->next = NULL;
        }
        else
        {
            temp->next = top;
            top = temp;
        }
    }
    int pop() // POP Function to delete value from Stack
    {
        int d;
        if (top == NULL)
        {
            cout << "Underflow";
        }
        else
        {
            d = top->data;
            temp = top;
            top = top->next;
            delete temp;
        }
        return d;
    }
    void traversal() // Function to traversal/print STACK
    {
        if (top == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = top;
            while (curr != NULL)
            {
                cout << curr->data << endl;
                curr = curr->next;
            }
        }
    }
};
int main()
{
    system("cls");
    STACK s;
    int d, ch;
    char ans;
    cout << "Stack operations";
    do
    {
        cout << "\n1.Push\n2.Pop\n3.Print ";
        cout << "\n\nEnter your choice = ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be inserted : ";
            cin >> d;
            s.push(d);
            break;
        }
        case 2:
        {
            d = s.pop();
            cout << "\nDeleted value " << d;
            break;
        }
        case 3:
        {
            cout << "\nStack Values are \n";
            s.traversal();
            break;
        }
        default:
        {
            cout << "\nInvalid choice \n";
        }
        }
        cout << "\nCont...(y / n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    getch();
    return 0;
}