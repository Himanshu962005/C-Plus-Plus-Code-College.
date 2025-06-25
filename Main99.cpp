// WAP to perform traversing in a Linked List using a " Traverse " Function.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *head)
{
    cout << "\nElements are : ";
    while (head != NULL)
    {
        cout << "\nElement is " << head->data;
        head = head->next;
    }
}
int main()
{
    system("cls");
    struct node *new1, *start = NULL, *head = NULL;
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
    traverse(start);
    getch();
    return 0;
}