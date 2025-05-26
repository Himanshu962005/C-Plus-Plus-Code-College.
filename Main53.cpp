// Addition of 2 Complex Number : + Binary Operators Overloading.
#include <iostream>
#include <conio.h>
using namespace std;
class Complex
{
private:
    int Real, Imag;

public:
    Complex()
    {
    }
    Complex(int r, int i)
    {
        Real = r;
        Imag = i;
    }
    void display()
    {
        cout << Real << "+i" << Imag;
    }
    Complex operator+(Complex C)
    {
        Complex Sum;
        Sum.Real = Real + C.Real;
        Sum.Imag = Imag + C.Imag;
        return (Sum);
    }
};
int main()
{
    system("cls");
    Complex C1(3, 4);
    Complex C2(2, 5);
    Complex C3 = C1 + C2;
    cout << "\nC1 = ";
    C1.display();
    cout << "\nC2 = ";
    C2.display();
    cout << "\n----------";
    cout << "\nC3 = ";
    C3.display();
    cout << "\n----------";
    getch();
    return 0;
}