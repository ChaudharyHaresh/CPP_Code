#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<" a:";
    cin>>a;
    cout<<" b:";
    cin>>b;
    cout<<" c:";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<" a is bigger";
    }
    else if(b>c)
    {
        cout<<" b is bigger";
    }
    else
    {
        cout<<" c is bigger";
    }
}