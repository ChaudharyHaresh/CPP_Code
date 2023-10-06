#include<iostream>
using namespace std;
int main()
{
    int b,a;
    cout<<" basic salary :";
    cin>>b;
    if(b<5001)
    {
        a=b*0.28;
        cout<<"\n gross salary:"<<a+b;
    }
    else if(b>5000 && b<10001)
    {
        a=b*0.42;
        cout<<"\n gross.1 salary :"<<a+b;
    }
    else if(b>10000 && b<15001)
    {
        a=b*0.55;
        cout<<"\n gross.2 salary :"<<a+b;
    }
    else if(b>15000)
    {
        a=b*0.70;
        cout<<"\n gross.3 salary :"<<a+b;
    }

}