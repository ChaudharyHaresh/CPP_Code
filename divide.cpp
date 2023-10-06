#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" value for a:";
    cin>>a;
    if(a%5==0)
    {
        cout<<" can divide by 5:"<<a;
    }
    else if (a%3==0)
    {
        cout<<" can divide by 3:"<<a;
    }
    else
    {
        cout<<" cant divese by 5 or 3:"<<a;
    }
}