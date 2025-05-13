// Area and Volume of Room: Simple Inheritance.
#include <iostream>
#include <conio.h>
using namespace std;
class Room
{
public:
    int L, W;
    void getdata(int l, int w)
    {
        L = l;
        W = w;
    }
    void printdata()
    {
        cout << "\nLength = " << L;
        cout << "\nWidth = " << W;
    }
    void area()
    {
        int AR = L * W;
        cout << "\nArea of Room = " << AR;
    }
};
class MyRoom : public Room
{
private:
    int H;

public:
    void setdata(int h)
    {
        H = h;
    }
    void displaydata()
    {
        cout << "\nHeight = " << H;
    }
    void volume()
    {
        int V = L * W * H;
        cout << "\nVolume of Room = " << V;
    }
};
int main()
{
    system("cls");
    MyRoom x;
    x.getdata(10, 20);
    x.setdata(30);
    x.printdata();
    x.displaydata();
    x.area();
    x.volume();
    getch();
    return 0;
}