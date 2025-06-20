// C++ program to count the object value using the keyword static variable.
#include <iostream>
#include <conio.h>
using namespace std;
class static_class
{
    int n;
    static int count; // Static Variable.
public:
    // Constructor.
    static_class()
    {
        n = ++count;
    }
    void obj_number()
    {
        cout << "\n\tObject number is : " << n;
    }
    static void obj_count()
    {
        cout << "\nNumber of Objects : " << count;
    }
};
int static_class::count;
int main()
{
    system("cls");
    static_class obj1, obj2;
    obj1.obj_count();
    obj1.obj_number();
    obj2.obj_count();
    obj2.obj_number();
    getch();
    return (0);
}