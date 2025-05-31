// C++ program for Queue implementation using Linked List.
#include <iostream>
#include <conio.h>
using namespace std;
struct NODE // structure for NODE
{
    int data;
    NODE *next;
};
class QUEUE
{
private:
    NODE *front, *rear, *temp, *curr;

public:
    QUEUE()
    {
        front = rear = NULL;
    }
    // enQueue (Insertion) Function to insert value to Queue
    void enQueue(int d)
    {
        temp = new NODE; // allocate memory to new node
        temp->data = d;
        temp->next = NULL;
        if (temp == NULL)
        {
            cout << "Overflow";
        }
        else if (front == NULL)
        {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    // deQueue (delete) Function to delete value from Queue
    int deQueue()
    {
        int d = -1;
        if (front == NULL)
        {
            cout << "Queue is Empty";
        }
        else
        {
            d = front->data;
            temp = front;
            front = front->next;
            delete temp;
        }
        return d;
    }
    void traversal() // Function to traversal/print STACK
    {
        if (front == NULL)
        {
            cout << "Underflow" << endl;
        }
        else
        {
            curr = front;
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
    QUEUE q;
    int d, ch;
    char ans;
    cout << "Queue operations";
    do
    {
        cout << "\n1.Insert\n2.Delete\n3.Print ";
        cout << "\n\nEnter your choice : ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter value to be inserted : ";
            cin >> d;
            q.enQueue(d);
            break;
        }
        case 2:
        {
            d = q.deQueue();
            if (d != -1)
            {
                cout << "\nDeleted value " << d;
                break;
            }
        }
        case 3:
        {
            cout << "\nQueue Value are\n";
            q.traversal();
            break;
        }
        default:
        {
            cout << "\nInvalid choice\n";
        }
        }
        cout << "\nCont...(y / n) : ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    getch();
    return 0;
}