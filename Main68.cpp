// C++ program to convert INFIX EXPRESSION TO POSTFIX EXPRESSION.
#include <iostream>
#include <conio.h>
using namespace std;
#define MAX 100
// STACK CLASS DECLARATION
class stack
{
public:
    char stack_array[MAX];
    int top;
    // DEFAULT CONSTRUCTOR USED TO INITIALIZE TOP=-1
    stack()
    {
        top = -1;
    }
    void push(char symbol) // PUSH FUNCTION
    {
        if (full())
        {
            cout << "\nStack overflow :\n";
        }
        else
        {
            top = top + 1;
            stack_array[top] = symbol;
        }
    }
    char pop() // POP FUNCTION
    {
        if (empty())
        {
            return ('#'); // Return value '#' indicates stack is empty
        }
        else
        {
            return (stack_array[top--]);
        }
    }
    int empty()
    {
        if (top == -1)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
    int full()
    {
        if (top == 49)
        {
            return (1);
        }
        else
        {
            return (0);
        }
    }
}; // STACK CLASS CLOSED
// EXPRESSION CLASS DECLARATION
class Expression
{
    char infix[MAX];
    char postfix[MAX];

public:
    // INPUT FUNCTION TO TAKE INFIX EXPRESSION FROM THE USER
    void input()
    {
        cout << "\nEnter an infix expression: (Ex. 2+3-(7*6)";
        cin >> infix;
    }
    int white_space(char symbol)
    {
        if (symbol == ' ' || symbol == '\t' || symbol == '\0')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void ConvertToPostfix() // POSTFIX CONVERSION FUNCTION
    {
        stack s;
        int l, precedence, p;
        char entry1, entry2;
        p = 0;
        for (int i = 0; infix[i] != '\0'; i++)
        {
            entry1 = infix[i];
            if (!white_space(entry1))
            {
                switch (entry1)
                {
                case '(':
                    s.push(entry1);
                    break;
                case ')':
                    while ((entry2 = s.pop()) != '(')
                    {
                        postfix[p++] = entry2;
                    }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                    if (!s.empty())
                    {
                        precedence = prec(entry1);
                        entry2 = s.pop();
                        while (precedence <= prec(entry2))
                        {
                            postfix[p++] = entry2;
                            if (!s.empty())
                            {
                                entry2 = s.pop();
                            }
                            else
                            {
                                break;
                            }
                        }
                        if (precedence > prec(entry2))
                        {
                            s.push(entry2);
                        }
                    }
                    s.push(entry1);
                    break;
                default:
                    postfix[p++] = entry1;
                    break;
                }
            }
        }
        while (!s.empty()) // while stack is not empty
        {
            postfix[p++] = s.pop();
        }
        postfix[p] = '\0';
        cout << "\nThe postfix expression is : " << postfix << endl;
    }
    int prec(char symbol)
    {
        switch (symbol)
        {
        case '/':
            // Precedence of / is 4
            return (4);
        case '*':
            // Precedence of * is 3
            return (3);
        case '+':
            // Precedence of + is 2
            return (2);
        case '-':
            // Precedence of - is 1
            return (1);
        case '(':
            // Precedence of ( is 0
            return (0);
        default:
            return (-1);
        }
    }
};
int main()
{
    system("cls");
    char ch = 'y';
    Expression expr;
    do
    {
        expr.input();
        expr.ConvertToPostfix();
        cout << "\nDo you want to continue ? (y / n) : ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    getch();
    return 0;
}