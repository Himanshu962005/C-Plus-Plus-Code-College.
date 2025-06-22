// WAP to perform POP operation in the Stack using a Linked List.
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
        newNode->data = item;
        newNode->next = top;
        top = newNode;
    }
}
void pop()
{
    if (top == nullptr)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}
void peep()
{
    Node *current = top;
    cout << "Elements are :\n";
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
    cout << "\nBefore pop operation....\n";
    peep();
    pop();
    pop();
    cout << "\nAfter pop operation....\n";
    peep();
    getch();
    return 0;
}