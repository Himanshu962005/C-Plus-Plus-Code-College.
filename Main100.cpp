// WAP to create a single node in the Linked List.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
};
int main()
{
    system("cls");
    struct node *start = NULL, *head = NULL, *new1;
    new1 = (struct node *)malloc(sizeof(struct node));
    new1->data = 10;
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
    head = start;
    while (head != NULL)
    {
        cout << "Element is " << head->data;
        head = head->next;
    }
    getch();
    return 0;
}