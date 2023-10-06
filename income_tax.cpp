#include<iostream>
using namespace std;
int main()
{
    int a,tax;
    cout<<" income:";
    cin>>a;
    if(a<2501)
    {
        tax=a*0;
        cout<<"\n tax :"<<tax;
    }
    else if(a>2500 && a<5001)
    {
        tax=a*0.10;
        cout<<"\n tax :"<<tax;
    }
    else if(a>5000 && a<10001)
    {
        tax=a*0.20;
        cout<<"\n tax :"<<tax;
    }
    else if(a>10000)
    {
        tax=a*0.30;
        cout<<"\n tax :"<<tax;
    }
}