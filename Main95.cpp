// WAP to delete a node at a specific position of the Linked List.
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
    cout << "\nElements are : ";
    while (head != NULL)
    {
        cout << "\nElement is " << head->data;
        head = head->next;
    }
}
void del_spe_pos()
{
    head = start;
    int temp, pos, ctr = 1;
    if (head == NULL)
    {
        cout << "Underflow";
    }
    else
    {
        cout << "\n________________________________________";
        cout << "\nIn which position you want to delete : ";
        cin >> pos;

        while (ctr < pos - 1)
        {
            head = head->next;
            ctr = ctr + 1;
        }
        temp = head->next->data;
        head->next = head->next->next;
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
    del_spe_pos();
    cout << "\nAfter deletion of node in specific position : ";
    traverse();
    getch();
    return 0;
}