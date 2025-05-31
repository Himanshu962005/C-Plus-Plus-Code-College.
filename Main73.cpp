// C++ program to insert node at the end of Double Linked List.
#include <iostream>
#include <conio.h>
using namespace std;
struct NODE // structure for NODE
{
    NODE *prev;
    int data;
    NODE *next;
};
class linked_list
{
private:
    NODE *start, *end, *temp, *curr;

public:
    linked_list()
    {
        start = end = NULL;
    }
    // Function to insert at the end in double linked list
    void insert_end(int d)
    {
        temp = new NODE; // allocate memory to new node
        temp->data = d;
        temp->next = NULL;
        if (start == NULL)
        {
            start = end = temp;
            end->next = NULL;
            end->prev = NULL;
        }
        else
        {
            end->next = temp;
            temp->prev = end;
            temp->next = NULL;
            end = temp;
        }
    }
    // Function to traversal/print double linked list (START to END)
    void traversal_S_to_E()
    {
        if (start == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = start;
            while (curr != NULL)
            {
                cout << curr->data << endl;
                curr = curr->next;
            }
        }
    }
    // Function to traversal/print double linked list (END to START)
    void traversal_E_to_S()
    {
        if (end == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = end;
            while (curr != NULL)
            {
                cout << curr->data << endl;
                curr = curr->prev;
            }
        }
    }
};
int main()
{
    system("cls");
    linked_list list;
    int d;
    char ans;
    do
    {
        cout << "Enter value to be inserted : ";
        cin >> d;
        list.insert_end(d);
        cout << "\nCont...(y / n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "\nValue of list from start to end\n";
    list.traversal_S_to_E();
    cout << "\nValue of list from end to start\n";
    list.traversal_E_to_S();
    getch();
    return 0;
}