// Write a C++ program to illustrate a simple Inheritance (Calculating Area & Volume of a Room).
#include <iostream>
#include <conio.h>
using namespace std;
class Room // Base class
{
public:
    int l, w;
    void getdata(int L, int W)
    {
        l = L;
        w = W;
    }
    void display()
    {
        cout << "\nLength of Room = " << l;
        cout << "\nWidth of Room = " << w;
    }
    void area()
    {
        int a = l * w;
        cout << "\nArea = " << a;
    }
};
class MyRoom : public Room // Derived class
{
private:
    int h;

public:
    void setdata(int H)
    {
        h = H;
    }
    void print()
    {
        cout << "\nHeight of Room = " << h;
    }
    void volume()
    {
        int v = l * w * h;
        cout << "\nVolume = " << v;
    }
};
int main()
{
    MyRoom x;
    x.getdata(5, 4);
    x.setdata(7);
    x.display();
    x.print();
    x.area();
    x.volume();
}