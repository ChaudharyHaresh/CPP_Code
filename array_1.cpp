#include<iostream>
using namespace std;
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        cout<<"\n enter a["<<i<<"]=";
        cin>>a[i];
    }
   cout<<"\n\ta\n";
    for(i=0;i<5;i++)
    {
        cout<<"\t"<<a[i];
        cout<<"\n";
    }
}