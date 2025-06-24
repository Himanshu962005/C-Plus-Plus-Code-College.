// WAP to perform Push operation in Stack using Array at compile time.
#include <iostream>
#include <conio.h>
using namespace std;
int stack[5];
int top = -1;
void push(int y)
{
    if (top == 4)
    {
        cout << "Overflow\n";
    }
    else
    {
        top++;
        stack[top] = y;
    }
}
void traverse()
{
    if (top == -1)
    {
        cout << "Stack is empty\n";
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            cout << "Element is " << stack[i] << endl;
        }
    }
}
int main()
{
    system("cls");
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    traverse();
    getch();
    return 0;
}