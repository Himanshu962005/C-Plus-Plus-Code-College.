// C++ program to insert node at the beginning of a single linked list.
#include <iostream>
using namespace std;
struct NODE
{
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
    // Function to insert at the end
    void insert_end(int d)
    {
        temp = new NODE; // allocate memory to new node
        temp->data = d;
        temp->next = NULL;
        if (start == NULL)
        {
            start = end = temp;
            end->next = NULL;
        }
        else
        {
            end->next = temp;
            end = temp;
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
    linked_list list;
    int d;
    char ans;
    do
    {
        cout << "\nEnter value to be inserted ";
        cin >> d;
        list.insert_end(d);
        cout << "\n\nCont...(y / n)";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    cout << "\n Value are \n";
    list.traversal();
}
