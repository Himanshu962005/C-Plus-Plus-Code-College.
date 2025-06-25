// WAP to insert a node at a specific position of the Linked List.
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
    cout << "\nElements are : ";
    head = start;
    while (head != NULL)
    {
        cout << "\nElement is " << head->data;
        head = head->next;
    }
}
void ins_spe_pos()
{
    struct node *newnode;
    int item, ctr = 1, pos;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        cout << "Overflow";
    }
    else
    {
        head = start;
        cout << "\n________________________________________";
        cout << "\nIn which position you want to insert : ";
        cin >> pos;
        while (ctr < pos - 1)
        {
            head = head->next;
            ctr = ctr + 1;
        }
        cout << "\nEnter the element which you want to insert : ";
        cin >> item;
        newnode->data = item;
        newnode->next = head->next;
        head->next = newnode;
        head = newnode;
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
    ins_spe_pos();
    traverse();
    getch();
    return 0;
}