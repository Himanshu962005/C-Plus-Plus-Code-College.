// WAP to implement the "Towers of Hanoi" problem using Recursion.
#include <iostream>
#include <conio.h>
using namespace std;
void tower(int n, char source, char auxiliary, char target)
{
    if (n == 1)
    {
        cout << "Move disc 1 from peg "
             << source
             << " to peg "
             << target
             << endl;
        return;
    }
    // Move top n-1 from source to auxiliary, using target as a buffer.
    tower(n - 1, source, target, auxiliary);
    // Move the largest disc from source to target.
    cout << "Move disc "
         << n
         << " from peg "
         << source
         << " to peg "
         << target
         << endl;
    // Move the n-1 discs from auxiliary to target, using source as a buffer.
    tower(n - 1, auxiliary, source, target);
}
int main()
{
    system("cls");
    int n;
    cout << "Enter number of discs : ";
    cin >> n;
    tower(n, 'A', 'B', 'C');
    getch();
    return 0;
}