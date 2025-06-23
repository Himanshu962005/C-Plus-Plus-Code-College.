// WAP to perform Push operation in the Stack using a Linked List.
#include <iostream>
#include <conio.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top = nullptr;
void push()
{
    int num;
    cout << "How many nodes you want to create : ";
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int item;
        cout << "Enter the element : ";
        cin >> item;
        Node *newNode = new Node();
        if (newNode == nullptr)
        {
            cout << "Stack Overflow\n";
            return;
        }
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }
}
void peep()
{
    cout << "_____________________________________\n";
    cout << "Elements are :\n";
    Node *current = top;
    while (current != nullptr)
    {
        cout << "Element is " << current->data << endl;
        current = current->next;
    }
}
int main()
{
    system("cls");
    push();
    peep();
    getch();
    return 0;
}