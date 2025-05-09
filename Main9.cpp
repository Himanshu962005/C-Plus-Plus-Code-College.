// C++ program to Insert Node at the end of single linked list.
#include <iostream>
using namespace std;
// Structure for NODE
struct Node
{
    int data;
    Node *next;
};
class Linked_List
{
private:
    Node *start, *end, *temp, *curr;

public:
    Linked_List()
    {
        start = end = NULL;
    }
    // Function to insert at the beginning
    void insert_beginning(int d)
    {
        temp = new Node; // Allocate memory to new node
        temp->data = d;
        temp->next = NULL;
        if (start == NULL)
        {
            start = end = temp;
            end->next = NULL;
        }
        else
        {
            temp->next = start;
            start = temp;
        }
    }
    // Function to traversal/print single linked list
    void traversal()
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
};
int main()
{
    system("cls");
    Linked_List list;
    int d;
    char ans;
    do
    {
        cout << "\nEnter value to be inserted = ";
        cin >> d;
        list.insert_beginning(d);
        cout << "\n\ncont...(y/n) ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "\nvalue are \n";
    list.traversal();
}
