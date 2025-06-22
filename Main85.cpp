// WAP to insert an element into a QUEUE using an array.
#include <iostream>
#include <conio.h>
using namespace std;
int queue[6];
int front, rear;
int ins_queue()
{
    int item;
    if (front == 1 && rear == 6)
    {
        cout << "Overflow";
    }
    if (front == NULL || rear == NULL)
    {
        front = rear = 1;
    }
    else
    {
        rear = rear + 1;
    }
    cout << "Enter item you want to insert : ";
    cin >> item;
    queue[rear] = item;
}
void traverse()
{
    if (front == NULL)
    {
        cout << "Queue is empty";
    }
    else
    {
        for (int i = front; i <= rear; i++)
        {
            cout << "\nElement is " << queue[i];
        }
    }
}
int main()
{
    system("cls");
    ins_queue();
    ins_queue();
    ins_queue();
    ins_queue();
    cout << "\nElements of queue : \n";
    traverse();
    getch();
    return 0;
}