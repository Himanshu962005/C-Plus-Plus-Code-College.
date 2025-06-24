// WAP will perform POP operations in the Stack using an Array at compile time.
#include <iostream>
#include <conio.h>
using namespace std;
int stack[5];
int top = -1, item;
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
void pop()
{
    if (top == -1)
    {
        cout << "Underflow\n";
    }
    else
    {
        item = stack[top];
        top--;
    }
}
void peep()
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
    cout << "Before pop operation:\n";
    peep();
    pop();
    pop();
    cout << "\nAfter pop operation:\n";
    peep();
    getch();
    return 0;
}