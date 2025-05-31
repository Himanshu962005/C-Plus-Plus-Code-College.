// C++ program to evaluate of Postfix Expressions using Stack.
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
using namespace std;
const int MAX = 50;
class postfix // Postfix class declaration
{
private:
    int stack[MAX];
    int top, nn;
    char *s;

public:
    postfix() // constructor
    {
        top = -1;
    }
    void setexpr(char *str)
    {
        s = str;
    }
    void push(int item)
    {
        if (top == MAX - 1)
        {
            cout << endl
                 << "Stack overflow ";
        }
        else
        {
            top++;
            stack[top] = item;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << endl
                 << "Stack underflow ";
            return NULL;
        }
        int data = stack[top];
        top--;
        return data;
    }
    void calculate()
    {
        int n1, n2, n3;
        while (*s)
        {
            if (*s == ' ' || *s == '\t')
            {
                s++;
                continue;
            }
            if (isdigit(*s))
            {
                nn = *s - '0';
                push(nn);
            }
            else
            {
                n1 = pop();
                n2 = pop();
                switch (*s)
                {
                case '+':
                    n3 = n2 + n1;
                    break;
                case '-':
                    n3 = n2 - n1;
                    break;
                case '/':
                    n3 = n2 / n1;
                    break;
                case '*':
                    n3 = n2 * n1;
                    break;
                case '%':
                    n3 = n2 % n1;
                    break;
                case '$':
                    n3 = pow(n2, n1);
                    break;
                default:
                    cout << "Invalid operator";
                    exit(1);
                }
                push(n3);
            }
            s++;
        }
    }
    void show()
    {
        nn = pop();
        cout << "Final Result : " << nn;
    }
};
int main()
{
    system("cls");
    char expr[MAX];
    cout << "Enter postfix expression to be evaluated : ";
    cin.getline(expr, MAX);
    postfix q;
    q.setexpr(expr);
    q.calculate();
    q.show();
    getch();
    return 0;
}