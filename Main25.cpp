// Write a program to print table using OOPS programming.
#include <iostream>
#include <conio.h>
using namespace std;
class Table
{
private:
    int N;

public:
    void getdata(int n)
    {
        N = n;
    }
    void printdata()
    {
        cout << "Given Number = " << N << endl;
    }
    void calc();
};
void Table::calc()
{
    int I, M;
    for (I = 1; I <= 10; I++)
    {
        M = N * I;
        cout << "\nTable = " << M;
    }
}
int main()
{
    system("cls");
    Table x;
    x.getdata(9);
    x.printdata();
    x.calc();
    getch();
}