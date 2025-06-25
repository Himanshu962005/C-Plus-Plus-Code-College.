// WAP to delete a node at the beginning of the Linked List.
#include <iostream>
#include <conio.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *start = NULL, *head = NULL;
void traverse()
{
    head = start;
    cout << "\n\nElements are : ";
    while (head != NULL)
    {
        cout << "\nElement is " << head->data;
        head = head->next;
    }
}
void del_beg()
{
    if (start == NULL)
    {
        cout << "\nUnderflow";
    }
    else
    {
        node *temp = start;
        start = start->next;
        free(temp); // Optional Memory Free.
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
            cout << "Wants to continue : ";
            cin >> ch;
        }
    } while (ch == 1);
    traverse(); // Show full list.
    del_beg();  // Delete 1st node.
    traverse(); // Show updated list.
    getch();
    return 0;
}