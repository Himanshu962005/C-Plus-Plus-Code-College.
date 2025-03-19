#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    float p,r,t,s;
    system("CLS");
    cout<<"Enter the Principal Amount ";
    cin>>p;
    cout<<"Enter the Rate of Interest ";
    cin>>r;
    cout<<"Enter the Time Period ";
    cin>>t;
    s=(p*r*t)/100;
    cout<<"Simple Interest is "<<s;
    getch();
    return 0;
}
