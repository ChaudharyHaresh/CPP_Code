#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],i;
    for(i=0;i<5;i++)
    {
        cout<<"\n enter a["<<i<<"]=";
        cin>>a[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"b["<<i<<"]=";
        cin>>b[i];
    }
    cout<<"\n\ta\tb\ttotal\n";
    for(i=0;i<5;i++)
    {
        cout<<"\t"<<a[i];
        cout<<"\t"<<b[i];
        cout<<"\t"<<a[i]+b[i];
        cout<<"\n";
    }
}