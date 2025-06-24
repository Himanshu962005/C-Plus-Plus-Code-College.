// WAP to delete a node at the end of the Linked List.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *start = NULL, *head = NULL;
void traverse()
{
    head = start;
    cout << "\n_________________________________\n";
    cout << "Elements are : ";
    while (head != NULL)
    {
        cout << "\nElement is " << head->data;
        head = head->next;
    }
}
void del_end()
{
    head = start;
    int temp;
    if (start == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        while (head->next->next != NULL)
        {
            head = head->next;
        }
        temp = head->next->data;
        head->next = NULL;
    }
}
int main()
{
    system("cls");
    struct node *new1;
    int item, ch;
    do
    {
        new1 = (struct node *)malloc(sizeof(struct node));
        if (new1 == NULL)
        {
            cout << "Overflow";
        }
        else
        {
            cout << "Enter item to insert : ";
            cin >> item;
            new1->data = item;
            new1->next = NULL;
            if (start == NULL)
            {
                start = head = new1;
            }
            else
            {
                head->next = new1;
                head = new1;
            }
            cout << "Wants to continue?(1/0)? : ";
            cin >> ch;
        }
    } while (ch == 1);
    traverse();
    del_end();
    cout << "\n\nAfter deletion of last node : ";
    traverse();
    getch();
    return 0;
}