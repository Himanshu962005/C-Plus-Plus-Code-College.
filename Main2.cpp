#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int p,c,b,m,e,t,a;
    system("CLS");
    cout<<"Enter marks of Physics ";
    cin>>p;
    cout<<"Enter marks of Chemistry ";
    cin>>c;
    cout<<"Enter marks of Biology ";
    cin>>b;
    cout<<"Enter marks of Mathematics ";
    cin>>m;
    cout<<"Enter marks of English ";
    cin>>e;
    t=p+c+b+m+e;
    a=(p+c+b+m+e)/5;
    cout<<"Total marks is "<<t<<endl;
    cout<<"Average marks is "<<a;
    getch();
    return 0;
}
