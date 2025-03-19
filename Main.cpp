#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,k,l,m,n;
    system("CLS");
    cout<<"Enter first number ";
    cin>>i;
    cout<<"Enter second number ";
    cin>>j;
    k=i+j;
    l=i-j;
    m=i*j;
    n=i/j;
    cout<<"Addition is "<<k<<endl;
    cout<<"Substraction is "<<l<<endl;
    cout<<"Multiplication is "<<m<<endl;
    cout<<"Division is "<<n<<endl;
    getch();
    return 0;
} 
