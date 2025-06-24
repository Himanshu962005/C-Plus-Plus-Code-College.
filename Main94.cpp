// WAP to create a Circular Linked List.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *tail = NULL, *head = NULL;
void traverse()
{
    struct node *current;
    current = head;
    cout << ("Elements are : ");
    do
    {
        cout << "\nElement is " << current->data;
        current = current->next;
    } while (current != head);
}
int main()
{
    system("cls");
    struct node *new1;
    int item, ch;
    do
    {
        new1 = new struct node;
        if (new1 == NULL)
        {
            cout << "Overflow";
        }
        else
        {
            cout << "Enter item to insert : ";
            cin >> item;
            new1->data = item;

            if (head == NULL)
            {
                head = tail = new1;
                new1->next = head;
            }
            else
            {
                tail->next = new1;
                tail = new1;
                tail->next = head;
            }
            cout << "Wants to continue?(1/0)? : ";
            cin >> ch;
        }
    } while (ch == 1);
    traverse();
    getch();
    return 0;
}