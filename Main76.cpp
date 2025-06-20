// C++ sample program for Static Variable and Static Function.
#include <iostream>
#include <conio.h>
using namespace std;
class test
{
private:
    static int count; // Static Data.
    int n;

public:
    // Constructor.
    test()
    {
        count = count + 1;
        n = count;
    }
    // Static Function.
    static void function1()
    {
        cout << "\nResult is : " << count << endl;
    }
    // Normal Function.
    void counter()
    {
        cout << "\nCounter is : " << n << endl;
    }
    // Destructor.
    ~test()
    {
        count = count - 1;
    }
};
int test::count = 0;
int main()
{
    system("cls");
    test obj1;
    // Static function is accessed using class name and scope resolution operator(::).
    test::function1();
    test obj2, obj3, obj4;
    test::function1();
    // normal function is accessed using object name and the dot member access operator(.).
    obj1.counter();
    obj2.counter();
    obj3.counter();
    obj4.counter();
    getch();
    return (0);
}